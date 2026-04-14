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

- (void)initializeOffsetWithEntries:(id)a0;
- (id)addTimeOffsetToMonotonicTime:(id)a0;
- (void)registerForTimeZoneChangedNotification;
- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;
- (void).cxx_destruct;
- (id)currentTime;
- (void)registerForDayChangedNotification;
- (void)writeOffsetToDefaults;
- (double)computeHourBucketOffset;
- (double)getHourBucketOffset;
- (id)removeTimeOffsetFromReferenceTime:(id)a0;

@end
