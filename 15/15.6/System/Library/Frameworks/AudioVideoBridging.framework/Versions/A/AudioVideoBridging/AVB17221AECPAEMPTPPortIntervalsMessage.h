@interface AVB17221AECPAEMPTPPortIntervalsMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) char logAnnounceIntervalValid;
@property (nonatomic) char logSyncIntervalValid;
@property (nonatomic) char logpDelayRequestIntervalValid;
@property (nonatomic) char loggPTPCapableIntervalValid;
@property (nonatomic) char logAnnounceInterval;
@property (nonatomic) char logSyncInterval;
@property (nonatomic) char logpDelayRequestInterval;
@property (nonatomic) char loggPTPCapableInterval;

+ (id)keyPathsForValuesAffectingLogAnnounceInterval;
+ (id)keyPathsForValuesAffectingLogAnnounceIntervalValid;
+ (id)keyPathsForValuesAffectingLogSyncInterval;
+ (id)keyPathsForValuesAffectingLogSyncIntervalValid;
+ (id)keyPathsForValuesAffectingLoggPTPCapableInterval;
+ (id)keyPathsForValuesAffectingLoggPTPCapableIntervalValid;
+ (id)keyPathsForValuesAffectingLogpDelayRequestInterval;
+ (id)keyPathsForValuesAffectingLogpDelayRequestIntervalValid;

- (id)init;
- (void)setLoggPTPCapableIntervalValid:(char)a0;
- (char)logSyncInterval;
- (char)logAnnounceInterval;
- (char)logAnnounceIntervalValid;
- (char)logSyncIntervalValid;
- (char)loggPTPCapableInterval;
- (char)loggPTPCapableIntervalValid;
- (char)logpDelayRequestInterval;
- (char)logpDelayRequestIntervalValid;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setLogAnnounceInterval:(char)a0;
- (void)setLogAnnounceIntervalValid:(char)a0;
- (void)setLogSyncInterval:(char)a0;
- (void)setLogSyncIntervalValid:(char)a0;
- (void)setLoggPTPCapableInterval:(char)a0;
- (void)setLogpDelayRequestInterval:(char)a0;
- (void)setLogpDelayRequestIntervalValid:(char)a0;

@end
