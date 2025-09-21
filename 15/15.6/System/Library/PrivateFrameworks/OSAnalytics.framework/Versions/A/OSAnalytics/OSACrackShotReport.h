@class NSDictionary, NSString;

@interface OSACrackShotReport : OSAStackShotReport {
    int _cpuType;
    NSString *_procPath;
    NSString *_bundleID;
    NSDictionary *_termination_info;
    char _isSystemWatchdog;
    unsigned long long _awakeSystemUptime;
}

@property (retain, nonatomic) NSDictionary *spindump;
@property (readonly) char isSnapshotDisabled;

+ (id)getDisplayState;
+ (id)getThermalPressureLevel;

- (void).cxx_destruct;
- (id)problemType;
- (char)saveWithOptions:(id)a0;
- (id)initForPid:(int)a0 exitSnapshot:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a1 reason:(id)a2;
- (id)additionalIPSMetadata;
- (id)decode_cpuType;
- (id)decode_reason:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a0 reason:(id)a1;
- (void)generateLogAtLevel:(char)a0 withBlock:(id /* block */)a1;
- (id)initWithPid:(int)a0 procName:(id)a1 bundleID:(id)a2 exitSnapshot:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a3 reason:(id)a4;
- (id)reportNamePrefix;

@end
