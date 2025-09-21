@class NSExtensionContext;

@interface CacheDeleteServiceInfo : NSObject

@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property char doNotQuery;

+ (id)serviceInfoWithExtensionContext:(id)a0;

- (void).cxx_destruct;
- (id)initWithExtensionContext:(id)a0;

@end
