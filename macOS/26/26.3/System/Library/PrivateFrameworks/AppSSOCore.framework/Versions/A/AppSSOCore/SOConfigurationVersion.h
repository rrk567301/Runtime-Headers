@interface SOConfigurationVersion : NSObject {
    long long _mode;
    int _token;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long version;

+ (void)reset;

- (unsigned long long)_state;
- (void)increaseVersionWithMessage:(id)a0;
- (void)setAppSSOUnavailable;
- (long long)checkVersion;
- (void)dealloc;
- (void)_setStateAndNotify:(unsigned long long)a0;
- (id)initWithMode:(long long)a0;

@end
