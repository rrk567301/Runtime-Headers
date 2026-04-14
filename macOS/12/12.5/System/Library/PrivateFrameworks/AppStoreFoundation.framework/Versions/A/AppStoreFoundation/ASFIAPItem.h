@class NSString, NSNumber, NSDate;

@interface ASFIAPItem : NSObject <NSCopying>

@property (copy) NSDate *originalPurchaseDate;
@property (copy) NSString *originalTransactionID;
@property (copy) NSDate *purchaseDate;
@property (copy) NSString *productID;
@property (copy) NSNumber *quantity;
@property (copy) NSString *transactionID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
