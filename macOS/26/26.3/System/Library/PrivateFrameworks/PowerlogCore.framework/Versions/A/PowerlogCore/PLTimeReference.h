@class NSString;
@protocol PLTimeReferenceManager;

@interface PLTimeReference : NSObject

@property (nonatomic) double hourBucketOffset;
@property (nonatomic) double offset;
@property (retain) id<PLTimeReferenceManager> timeManager;
@property long long timeReferenceType;
@property (retain) NSString *entryDefinitionKey;

+ (id)hourBucketOffsetKeyFromEntryDefinitionKey:(id)a0;
+ (id)defaultsKeyFromEntryDefinitionKey:(id)a0;

- (id)currentTime;
- (double)computeHourBucketOffset;
- (id)removeTimeOffsetFromReferenceTime:(id)a0;
- (void)registerForDayChangedNotification;
- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;
- (void).cxx_destruct;
- (void)initializeOffsetWithEntries:(id)a0;
- (void)writeOffsetToDefaults;
- (void)registerForTimeZoneChangedNotification;
- (double)getHourBucketOffset;
- (id)addTimeOffsetToMonotonicTime:(id)a0;

@end
