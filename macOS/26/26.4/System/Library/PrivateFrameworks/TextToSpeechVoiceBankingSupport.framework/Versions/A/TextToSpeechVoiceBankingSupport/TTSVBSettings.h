@class NSUserDefaults;

@interface TTSVBSettings : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) BOOL allowAppUsage;
@property (nonatomic) BOOL allowAppUsageDuringCalls;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
