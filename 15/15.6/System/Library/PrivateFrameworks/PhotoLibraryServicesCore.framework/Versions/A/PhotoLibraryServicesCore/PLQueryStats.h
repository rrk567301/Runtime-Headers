@class NSManagedObjectContext, NSSQLiteDatabaseStatistics;

@interface PLQueryStats : NSObject {
    NSManagedObjectContext *_context;
    NSSQLiteDatabaseStatistics *_preStats;
}

+ (id)startedQueryStatsWithContext:(id)a0;
+ (id)byteCountFormatter;
+ (char)allowedToTrack;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)stopRecordingDescriptionWithFetchCount:(long long)a0;

@end
