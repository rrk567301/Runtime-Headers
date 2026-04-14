@interface AVB17221AECPAEMSetPTPPortIntervalsMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) BOOL logAnnounceIntervalValid;
@property (nonatomic) BOOL logSyncIntervalValid;
@property (nonatomic) BOOL logpDelayRequestIntervalValid;
@property (nonatomic) BOOL loggPTPCapableIntervalValid;
@property (nonatomic) char logAnnounceInterval;
@property (nonatomic) char logSyncInterval;
@property (nonatomic) char logpDelayRequestInterval;
@property (nonatomic) char loggPTPCapableInterval;

+ (id)keyPathsForValuesAffectingLogAnnounceIntervalValid;
+ (id)keyPathsForValuesAffectingLogSyncIntervalValid;
+ (id)keyPathsForValuesAffectingLogpDelayRequestIntervalValid;
+ (id)keyPathsForValuesAffectingLoggPTPCapableIntervalValid;
+ (id)keyPathsForValuesAffectingLogAnnounceInterval;
+ (id)keyPathsForValuesAffectingLogSyncInterval;
+ (id)keyPathsForValuesAffectingLogpDelayRequestInterval;
+ (id)keyPathsForValuesAffectingLoggPTPCapableInterval;

- (id)init;
- (char)logSyncInterval;
- (void)setLogSyncInterval:(char)a0;
- (char)logAnnounceInterval;
- (void)setLogAnnounceInterval:(char)a0;
- (void)setLogAnnounceIntervalValid:(BOOL)a0;
- (BOOL)logAnnounceIntervalValid;
- (void)setLogSyncIntervalValid:(BOOL)a0;
- (BOOL)logSyncIntervalValid;
- (void)setLogpDelayRequestIntervalValid:(BOOL)a0;
- (BOOL)logpDelayRequestIntervalValid;
- (void)setLoggPTPCapableIntervalValid:(BOOL)a0;
- (BOOL)loggPTPCapableIntervalValid;
- (void)setLogpDelayRequestInterval:(char)a0;
- (char)logpDelayRequestInterval;
- (void)setLoggPTPCapableInterval:(char)a0;
- (char)loggPTPCapableInterval;

@end
