@interface KHProjectAttribute : KHAttribute {
    long long _projectId;
}

- (id)clone;
- (void)setProjectId:(long long)a0;
- (long long)projectId;
- (BOOL)isProjectModel;
- (void)cacheProjectId:(long long)a0;
- (id)cloneInDatabase:(id)a0;

@end
