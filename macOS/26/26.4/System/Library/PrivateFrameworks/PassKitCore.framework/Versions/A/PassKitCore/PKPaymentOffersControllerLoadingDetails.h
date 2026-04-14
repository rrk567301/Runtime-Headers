@class NSError, NSDate;

@interface PKPaymentOffersControllerLoadingDetails : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) NSDate *lastUpdated;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)loadingDetailsWithError:(id)a0;
+ (id)loadingDetailsWithState:(unsigned long long)a0;

- (id)initWithError:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWitState:(unsigned long long)a0;

@end
