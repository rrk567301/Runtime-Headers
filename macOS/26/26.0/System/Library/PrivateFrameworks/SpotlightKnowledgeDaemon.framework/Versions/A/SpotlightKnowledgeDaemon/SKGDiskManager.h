@class SKGKnowledgeFeedback, SKGJobContext;

@interface SKGDiskManager : NSObject {
    SKGJobContext *_jobContext;
    long long _journalSize;
    long long _journalCount;
    long long _deleteSize;
    long long _deleteCount;
}

@property (readonly, nonatomic) SKGKnowledgeFeedback *feedback;
@property (readonly, nonatomic) double availableCapacity;
@property (readonly, nonatomic) long long graphSize;
@property (readonly, nonatomic) long long journalsSize;
@property (readonly, nonatomic) long long journalsCount;
@property (readonly, nonatomic) long long deletesSize;
@property (readonly, nonatomic) long long deletesCount;
@property (readonly, nonatomic) long long peopleArchiveSize;
@property (readonly, nonatomic) long long peopleArchiveCount;

- (void)load;
- (void)refresh;
- (void).cxx_destruct;
- (void)resetWithGroup:(id)a0;
- (void)_clearLegacyResources;
- (void)_clearSpotlightIndexWithGroup:(id)a0;
- (void)_clearSpotlightKnowledgeResources;
- (void)createPath:(id)a0 markPurgeable:(BOOL)a1;
- (void)createPurgeablePath:(id)a0;
- (void)destroyWithGroup:(id)a0;
- (id)initWithJobContext:(id)a0;
- (BOOL)transferJournalsForProtectionClasses:(id)a0;

@end
