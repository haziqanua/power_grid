 class BaseAsset
 {
    private:
    int m_basePrice = 0;
    int m_owner = 0;
    int m_purchasePrice = 0;
    int m_premium = 0;
    bool m_canOwnedByMany = false;

    public:
    BaseAsset(int basePrice, bool manyOwner = false);
    void purchaseBy(int ownerId);
    void purchaseAt(int price);

 };

