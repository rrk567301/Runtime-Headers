@class NSDictionary, NSString;

@interface CKLEventFilter : NSObject

@property (nonatomic) unsigned long long logTypes;
@property (retain, nonatomic) NSDictionary *categoriesBySubsystem;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) char simulatorMessagesOnly;
@property (nonatomic) char onlyTestLogs;

- (void).cxx_destruct;
- (char)matchesEvent:(id)a0;
- (void)_initFilterDict;
- (char)hasOnlyLogType:(unsigned long long)a0;
- (char)hasLogType:(unsigned long long)a0;
- (id)initWithLogTypes:(unsigned long long)a0;

@end
