#include "ResourceAsset.h"

ResourceAsset::ResourceAsset(ResourceType type, int id, int price ) : BaseAsset(price)
{
    m_type = type;
    m_id = id;
}

CoalResource::CoalResource(int id, int price) : ResourceAsset(Coal,id,price)
{
}

OilResource::OilResource(int id, int price) : ResourceAsset(Oil,id,price)
{
}

GarbageResource::GarbageResource(int id, int price) : ResourceAsset(Trash,id,price)
{
}

UraniumResource::UraniumResource(int id, int price) : ResourceAsset(Uranium,id,price)
{
}