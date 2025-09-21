@class NSUserDefaults;

@interface TTSVBSettings : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) char allowAppUsage;
@property (nonatomic) char allowAppUsageDuringCalls;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
