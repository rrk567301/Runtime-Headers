@class PKMerchant, NSString, NSArray, PKPaymentTransaction;

@interface PKPaymentTransactionIconRequest : NSObject

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKMerchant *merchant;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSArray *completionHandlers;
@property (nonatomic) BOOL ignoreLogoURL;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)logoURL;

@end
