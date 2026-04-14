@interface APSIdentityUtilities : NSObject

@property (readonly, nonatomic) BOOL deviceIdentitySupported;
@property (readonly, nonatomic) BOOL albertIdentitySupported;
@property (readonly, nonatomic) BOOL useMultiIdentityProvider;
@property (readonly, nonatomic) BOOL baaPushIdentityEnabled;

+ (id)sharedInstance;

@end
