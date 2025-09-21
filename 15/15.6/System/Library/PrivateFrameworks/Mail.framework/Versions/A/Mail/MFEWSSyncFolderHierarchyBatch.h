@class NSString, NSArray;

@interface MFEWSSyncFolderHierarchyBatch : NSObject

@property (copy, nonatomic) NSString *initialSyncState;
@property (copy, nonatomic) NSString *finalSyncState;
@property (nonatomic) char isFinalBatch;
@property (copy, nonatomic) NSArray *createdFolders;
@property (copy, nonatomic) NSArray *updatedFolders;
@property (copy, nonatomic) NSArray *deletedFolderIDs;

- (void).cxx_destruct;

@end
