@class NSString, NSNumber, NSObject;

@interface MOSandboxExtension : NSObject

@property (readonly, nonatomic) NSString *token;
@property (retain, nonatomic) NSNumber *handle;
@property (readonly, nonatomic) NSObject *handleLock;
@property (nonatomic) char consumed;

+ (id)sandboxExtensionForPath:(id)a0 readonly:(char)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (void)consumeToken;
- (void)releaseHandle;

@end
