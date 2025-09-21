@class NSIndexSet, NSSet;

@interface PXFeedSectionInfosChange : NSObject

@property (nonatomic) BOOL shouldReload;
@property (retain, nonatomic) NSIndexSet *deletedIndexes;
@property (retain, nonatomic) NSIndexSet *insertedIndexes;
@property (retain, nonatomic) NSIndexSet *updatedIndexes;
@property (retain, nonatomic) NSSet *sectionInfosWithCommentChanges;
@property (retain, nonatomic) NSSet *updatedAssets;
@property (retain, nonatomic) NSSet *updatedAssetOIDs;

- (void).cxx_destruct;

@end
