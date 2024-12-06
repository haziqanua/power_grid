#include <BaseAsset.h>

class ResourceAsset : public BaseAsset
{
    private:
    int m_type = 0;
    int m_id = 0;

    public:
    ResourceAsset(int type, int id, int price);
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

