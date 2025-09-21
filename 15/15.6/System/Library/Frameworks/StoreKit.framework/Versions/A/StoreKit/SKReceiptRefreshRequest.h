@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest

@property (readonly, nonatomic) NSDictionary *receiptProperties;

- (void).cxx_destruct;
- (void)_start;
- (void)_requestCompletedWithError:(id)a0;
- (char)_wantsExpired;
- (char)_wantsRevoked;
- (char)_wantsVPP;
- (id)initWithReceiptProperties:(id)a0;

@end
