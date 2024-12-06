#include "BaseAsset.h"

BaseAsset::BaseAsset(int basePrice, bool manyOwner)
{
    m_basePrice = basePrice;
    m_canOwnedByMany = manyOwner;
}

void BaseAsset::purchaseBy(int owner)
{
    m_owner = owner;
}

void BaseAsset::purchaseAt(int price)
{
    m_purchasePrice = price;
    m_premium = m_purchasePrice - m_basePrice;
}