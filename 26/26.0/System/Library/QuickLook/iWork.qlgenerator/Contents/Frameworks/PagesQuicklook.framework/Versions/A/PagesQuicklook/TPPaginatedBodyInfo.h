@interface TPPaginatedBodyInfo : TPBodyInfo

- (Class)layoutClass;
- (id)pageInfo;
- (BOOL)laysOutVertically;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (id)previousTargetLastColumn;
- (Class)repClass;
- (void)inflateBodyLayout:(id)a0;
- (long long)modelRootIndex;
- (id)nextTargetTopicNumberHints;
- (id)pageHint;

@end
