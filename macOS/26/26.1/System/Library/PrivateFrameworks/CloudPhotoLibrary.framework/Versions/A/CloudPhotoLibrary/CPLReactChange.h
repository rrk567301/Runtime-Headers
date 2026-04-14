@interface CPLReactChange : CPLCommentChange

+ (Class)relatedRecordClass;

- (id)scopedIdentifiersForMapping;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;

@end
