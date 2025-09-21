@class NSString, OSLogPreferencesSubsystem;

@interface OSLogPreferencesCategory : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) OSLogPreferencesSubsystem *subsystem;
@property (readonly, nonatomic) char isLocked;
@property (readonly, nonatomic) long long effectiveEnabledLevel;
@property (readonly, nonatomic) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;
@property (nonatomic) char signpostEnabled;
@property (nonatomic) char signpostPersisted;
@property (nonatomic) char signpostBacktracesEnabled;
@property (nonatomic) char signpostAllowStreaming;

- (void).cxx_destruct;
- (void)reset;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (id)initWithName:(id)a0 subsystem:(id)a1;

@end
