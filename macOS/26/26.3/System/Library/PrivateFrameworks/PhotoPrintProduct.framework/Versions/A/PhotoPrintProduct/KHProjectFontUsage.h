@class NSString;

@interface KHProjectFontUsage : KHModel {
    long long _projectId;
    NSString *_font;
    long long _count;
}

- (void)setCount:(long long)a0;
- (long long)count;
- (void)setFont:(id)a0;
- (void)setProjectId:(long long)a0;
- (void)dealloc;
- (long long)projectId;
- (id)font;
- (id)clone;
- (void)cacheProjectId:(long long)a0;
- (void)setCount:(long long)a0 force:(BOOL)a1;
- (void)cacheCount:(long long)a0;
- (void)cacheFont:(id)a0;
- (id)cloneInDatabase:(id)a0;
- (BOOL)isProjectModel;

@end
