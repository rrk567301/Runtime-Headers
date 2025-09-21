@class NSWorkspace;

@interface CNRestrictedURLOpener : NSObject

@property (readonly) NSWorkspace *workspace;

- (id)init;
- (id)initWithWorkspace:(id)a0;
- (void).cxx_destruct;
- (void)openURL:(id)a0;

@end
