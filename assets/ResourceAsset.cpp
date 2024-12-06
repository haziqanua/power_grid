#include <ResourceAsset.h>

ResourceAsset::ResourceAsset(int type, int id, int price ) : BaseAsset(price)
{
    m_type = type;
    m_id = id;
}

CoalResource::CoalResource(int id, int price) : ResourceAsset(0,id,price)
{
}

OilResource::OilResource(int id, int price) : ResourceAsset(0,id,price)
{
}

GarbageResource::GarbageResource(int id, int price) : ResourceAsset(0,id,price)
{
}

UraniumResource::UraniumResource(int id, int price) : ResourceAsset(0,id,price)
{
}