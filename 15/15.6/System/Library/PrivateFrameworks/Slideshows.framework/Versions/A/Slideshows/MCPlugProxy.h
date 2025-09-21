@class MCPlug;

@interface MCPlugProxy : MCObject

@property (retain) MCPlug *plug;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (char)isKindOfClass:(Class)a0;
- (void)setContainer:(id)a0;
- (long long)zIndex;
- (void)_copySelfToSnapshot:(id)a0;
- (void)setSuperContainer:(id)a0;

@end
