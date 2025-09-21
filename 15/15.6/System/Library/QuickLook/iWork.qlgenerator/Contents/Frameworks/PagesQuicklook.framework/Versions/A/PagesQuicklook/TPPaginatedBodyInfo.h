@interface TPPaginatedBodyInfo : TPBodyInfo

- (id)pageInfo;
- (Class)layoutClass;
- (char)laysOutVertically;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (id)previousTargetLastColumn;
- (Class)repClass;
- (void)inflateBodyLayout:(id)a0;
- (long long)modelRootIndex;
- (id)nextTargetTopicNumberHints;
- (id)pageHint;

@end
