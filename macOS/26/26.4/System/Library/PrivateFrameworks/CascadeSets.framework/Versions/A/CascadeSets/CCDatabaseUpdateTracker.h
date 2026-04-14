@class CCSet;

@interface CCDatabaseUpdateTracker : NSObject <CCDatabaseUpdateSummary> {
    CCSet *_set;
}

@property (nonatomic) unsigned int modifiedRowCount;
@property (nonatomic) unsigned int localInstanceAddedCount;
@property (nonatomic) unsigned int localInstanceRemovedCount;
@property (nonatomic) unsigned int localInstanceUpdatedCount;
@property (nonatomic) unsigned int sharedItemAddedCount;
@property (nonatomic) unsigned int sharedItemRemovedCount;
@property (nonatomic) unsigned int sharedItemRevisedCount;

- (id)set;
- (id)initWithSet:(id)a0;
- (void).cxx_destruct;
- (BOOL)deltaProduced;
- (BOOL)localInstanceDeltaProduced;

@end
