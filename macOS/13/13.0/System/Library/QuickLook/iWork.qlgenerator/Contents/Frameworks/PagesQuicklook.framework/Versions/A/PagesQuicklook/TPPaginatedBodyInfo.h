@interface TPPaginatedBodyInfo : TPBodyInfo

- (id)pageInfo;
- (Class)layoutClass;
- (BOOL)laysOutVertically;
- (Class)repClass;
- (id)previousTargetLastColumn;
- (id)nextTargetFirstColumn;
- (id)nextTargetFirstChildHint;
- (long long)modelRootIndex;
- (id)nextTargetTopicNumberHints;
- (id)pageHint;
- (void)inflateBodyLayout:(id)a0;

@end
