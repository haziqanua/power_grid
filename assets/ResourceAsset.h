#include "BaseAsset.h"
#include "AssetEnums.h"

class ResourceAsset : public BaseAsset
{
    private:
    ResourceType m_type = None;
    int m_id = 0;

    public:
    ResourceAsset(ResourceType type, int id, int price);
};

class CoalResource : public ResourceAsset
{
    public:
    CoalResource(int id, int price);
};

class OilResource : public ResourceAsset
{
    public:
    OilResource(int id, int price);
};

class GarbageResource : public ResourceAsset
{
    public:
    GarbageResource(int id, int price);
};

class UraniumResource : public ResourceAsset
{
    public:
    UraniumResource(int id, int price);
};

