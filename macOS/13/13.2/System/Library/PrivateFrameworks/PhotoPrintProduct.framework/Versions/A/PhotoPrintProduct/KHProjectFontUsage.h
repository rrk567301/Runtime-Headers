@class NSString;

@interface KHProjectFontUsage : KHModel {
    long long _projectId;
    NSString *_font;
    long long _count;
}

- (void)dealloc;
- (long long)count;
- (void)setCount:(long long)a0;
- (id)font;
- (void)setFont:(id)a0;
- (id)clone;
- (void)setProjectId:(long long)a0;
- (long long)projectId;
- (BOOL)isProjectModel;
- (id)cloneInDatabase:(id)a0;
- (void)cacheProjectId:(long long)a0;
- (void)cacheFont:(id)a0;
- (void)cacheCount:(long long)a0;
- (void)setCount:(long long)a0 force:(BOOL)a1;

@end
