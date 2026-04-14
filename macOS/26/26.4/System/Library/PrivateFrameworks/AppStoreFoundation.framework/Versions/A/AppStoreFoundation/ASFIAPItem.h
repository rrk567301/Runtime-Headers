@class NSString, NSNumber, NSDate;

@interface ASFIAPItem : NSObject {
    void /* unknown type, empty encoding */ _storage;
}

@property (nonatomic, readonly) NSDate *originalPurchaseDate;
@property (nonatomic, readonly) NSString *originalTransactionID;
@property (nonatomic, readonly) NSDate *purchaseDate;
@property (nonatomic, readonly) NSString *productID;
@property (nonatomic, readonly) NSNumber *quantity;
@property (nonatomic, readonly) NSString *transactionID;

- (void).cxx_destruct;
- (id)init;

@end
