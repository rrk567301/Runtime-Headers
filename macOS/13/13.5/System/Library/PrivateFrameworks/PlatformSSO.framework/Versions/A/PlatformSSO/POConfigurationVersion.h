@interface POConfigurationVersion : NSObject {
    int _token;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long version;

+ (void)reset;

- (void)dealloc;
- (id)init;
- (unsigned long long)_state;
- (void)_setStateAndNotify:(unsigned long long)a0;
- (long long)checkVersion;
- (void)increaseVersionWithMessage:(id)a0;
- (void)setPlatformSSOUnavailable;

@end
