@class NSString;

@interface NEProviderXPCListener : NSXPCListener

@property (readonly, nonatomic) NSString *extensionContextClassName;

- (void).cxx_destruct;
- (id)initWithExtensionContextClassName:(id)a0;

@end
