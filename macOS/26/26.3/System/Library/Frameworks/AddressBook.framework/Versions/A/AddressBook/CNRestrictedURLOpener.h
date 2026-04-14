@class NSWorkspace;

@interface CNRestrictedURLOpener : NSObject

@property (readonly) NSWorkspace *workspace;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)a0;
- (void)openURL:(id)a0;

@end
