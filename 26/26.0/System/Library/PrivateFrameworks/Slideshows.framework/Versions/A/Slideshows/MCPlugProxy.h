@class MCPlug;

@interface MCPlugProxy : MCObject

@property (retain) MCPlug *plug;

- (void)dealloc;
- (void)setContainer:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (long long)zIndex;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)_copySelfToSnapshot:(id)a0;
- (void)setSuperContainer:(id)a0;

@end
