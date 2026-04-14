@class NSString;

@interface PKSandboxExtension : NSObject

@property (readonly, nonatomic) NSString *token;
@property long long handle;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0;
- (void)consume;
- (void)expel;

@end
