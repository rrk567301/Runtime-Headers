@interface APSIdentityUtilities : NSObject

@property (readonly, nonatomic) char deviceIdentitySupported;
@property (readonly, nonatomic) char albertIdentitySupported;
@property (readonly, nonatomic) char useMultiIdentityProvider;
@property (readonly, nonatomic) char baaPushIdentityEnabled;

+ (id)sharedInstance;

@end
