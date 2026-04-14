@interface KHProjectAttribute : KHAttribute {
    long long _projectId;
}

- (void)setProjectId:(long long)a0;
- (long long)projectId;
- (id)clone;
- (void)cacheProjectId:(long long)a0;
- (id)cloneInDatabase:(id)a0;
- (BOOL)isProjectModel;

@end
