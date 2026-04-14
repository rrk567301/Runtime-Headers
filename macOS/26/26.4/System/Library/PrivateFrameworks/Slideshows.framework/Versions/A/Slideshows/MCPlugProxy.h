@class MCPlug;

@interface MCPlugProxy : MCObject

@property (retain) MCPlug *plug;

- (void)setContainer:(id)a0;
- (long long)zIndex;
- (BOOL)isKindOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;
- (void)_copySelfToSnapshot:(id)a0;
- (void)setSuperContainer:(id)a0;

@end
