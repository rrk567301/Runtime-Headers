@class NSResponder;

@interface SHKViewServiceWindow : NSWindow

@property (retain, nonatomic) NSResponder *cachedFirstResponder;
@property (nonatomic) char canSetFirstResponder;

- (void).cxx_destruct;
- (char)makeFirstResponder:(id)a0;
- (void)makeCachedResponderFirstResponder;

@end
