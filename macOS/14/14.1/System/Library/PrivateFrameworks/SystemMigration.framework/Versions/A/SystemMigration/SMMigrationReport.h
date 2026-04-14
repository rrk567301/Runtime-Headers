@class SMMigrationRequest, NSMutableDictionary, SMProgressEntry, NSMutableOrderedSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SMMigrationReport : NSObject

@property (retain) NSMutableOrderedSet *activities;
@property (retain) NSMutableDictionary *notes;
@property (retain) NSMutableArray *progressEntries;
@property (retain) NSObject<OS_dispatch_queue> *activityQueue;
@property (retain) NSObject<OS_dispatch_queue> *noteQueue;
@property (retain) NSObject<OS_dispatch_queue> *progressQueue;
@property (retain) SMProgressEntry *lastProgressEntry;
@property (retain) NSObject<OS_dispatch_source> *progressTimer;
@property (retain) SMMigrationRequest *migrationRequest;

+ (id)sharedReport;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addActivity:(id)a0;
- (void)note:(id)a0;
- (void)recordProgressPercentComplete:(double)a0 timeRemaining:(double)a1 transferRate:(double)a2;
- (BOOL)saveProgressReport:(id *)a0;

@end
