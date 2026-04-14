@class MUITokenAddress, NSString, EMCategory;

@interface MUIRecategorizationViewModel : NSObject

@property (nonatomic, retain) MUITokenAddress *tokenAddress;
@property (nonatomic) long long businessID;
@property (nonatomic, retain) EMCategory *category;
@property (nonatomic, readonly) NSString *displayName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTokenAddress:(id)a0 businessID:(long long)a1 category:(id)a2;

@end
