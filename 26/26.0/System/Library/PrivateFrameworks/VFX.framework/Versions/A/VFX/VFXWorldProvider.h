@interface VFXWorldProvider : NSObject

@property (readonly, nonatomic) BOOL supportsARKit;

+ (id)createProviderWithOptions:(id)a0;

@end
