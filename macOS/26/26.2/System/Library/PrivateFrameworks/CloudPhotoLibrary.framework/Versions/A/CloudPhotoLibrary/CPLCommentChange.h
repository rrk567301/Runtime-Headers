@class NSString, NSDate;

@interface CPLCommentChange : CPLRecordChange

@property (copy, nonatomic) NSDate *commentDate;
@property (copy, nonatomic) NSString *assetIdentifier;

+ (BOOL)supportsDeletion;
+ (BOOL)supportsCollectionShare;
+ (BOOL)supportsDirectDeletion;
+ (BOOL)supportsRecordModificationDate;

- (void).cxx_destruct;
- (id)relatedIdentifier;
- (id)assetScopedIdentifier;
- (void)setAssetScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (BOOL)validateChangeWithError:(id *)a0;
- (BOOL)validateFullRecord;

@end
