@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest

@property (readonly, nonatomic) NSDictionary *receiptProperties;

- (void).cxx_destruct;
- (void)_start;
- (id)initWithReceiptProperties:(id)a0;
- (void)_handleReply:(id)a0;
- (void)_requestCompletedWithError:(id)a0;
- (BOOL)_wantsExpired;
- (BOOL)_wantsRevoked;
- (BOOL)_wantsVPP;

@end
