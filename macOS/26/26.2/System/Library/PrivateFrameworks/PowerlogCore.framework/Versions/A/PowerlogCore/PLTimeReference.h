@class NSString;
@protocol PLTimeReferenceManager;

@interface PLTimeReference : NSObject

@property (nonatomic) double hourBucketOffset;
@property (nonatomic) double offset;
@property (retain) id<PLTimeReferenceManager> timeManager;
@property long long timeReferenceType;
@property (retain) NSString *entryDefinitionKey;

+ (id)defaultsKeyFromEntryDefinitionKey:(id)a0;
+ (id)hourBucketOffsetKeyFromEntryDefinitionKey:(id)a0;

- (double)getHourBucketOffset;
- (id)removeTimeOffsetFromReferenceTime:(id)a0;
- (id)addTimeOffsetToMonotonicTime:(id)a0;
- (void)writeOffsetToDefaults;
- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;
- (void)registerForTimeZoneChangedNotification;
- (void)initializeOffsetWithEntries:(id)a0;
- (void)registerForDayChangedNotification;
- (id)currentTime;
- (double)computeHourBucketOffset;
- (void).cxx_destruct;

@end
