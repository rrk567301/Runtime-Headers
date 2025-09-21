@class NSString;

@interface CPLTextCommentChange : CPLCommentChange

@property (copy, nonatomic) NSString *commentText;

+ (Class)relatedRecordClass;

- (void).cxx_destruct;
- (id)scopedIdentifiersForMapping;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;

@end
