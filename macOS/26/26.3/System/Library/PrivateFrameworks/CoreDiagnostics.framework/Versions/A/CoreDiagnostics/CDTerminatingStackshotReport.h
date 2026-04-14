@class NSDictionary, NSString;

@interface CDTerminatingStackshotReport : CDStackshotReport {
    int _cpuType;
    NSString *_procPath;
    NSString *_bundleID;
    NSDictionary *_termination_info;
    unsigned long long _awakeSystemUptime;
}

@property (retain, nonatomic) NSDictionary *spindump;
@property (readonly) BOOL isSnapshotDisabled;

+ (id)getDisplayState;
+ (id)getThermalPressureLevel;

- (id)decode_cpuType;
- (id)reportNamePrefix;
- (void).cxx_destruct;
- (BOOL)saveWithOptions:(id)a0;
- (void)generateLogAtLevel:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)additionalIPSMetadata;
- (id)initForPid:(int)a0 exitSnapshot:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a1 reason:(id)a2;
- (id)decode_reason:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a0 reason:(id)a1;
- (id)problemType;
- (id)initWithPid:(int)a0 procName:(id)a1 bundleID:(id)a2 exitSnapshot:(struct exit_reason_snapshot { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a3 reason:(id)a4;
- (void)launchDiagnosticsReporter;

@end
