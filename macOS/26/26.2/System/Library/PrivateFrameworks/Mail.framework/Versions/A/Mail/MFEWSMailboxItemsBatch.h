@class NSString, NSMapTable, NSArray, NSDictionary;

@interface MFEWSMailboxItemsBatch : NSObject

@property (copy, nonatomic) NSString *initialSyncState;
@property (copy, nonatomic) NSString *finalSyncState;
@property (nonatomic) BOOL isFinalBatch;
@property (copy, nonatomic) NSMapTable *createdOrUpdatedItemIDsByType;
@property (copy, nonatomic) NSArray *deletedItemIDs;
@property (copy, nonatomic) NSDictionary *readFlagChangesByItemID;
@property (copy, nonatomic) NSDictionary *fetchedItemsByID;
@property (copy, nonatomic) NSArray *addedMessages;

- (void).cxx_destruct;
- (id)description;

@end
