@interface CBPowerManagementModule : NSObject <CBPowerManagement> {
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ agent;
    void /* unknown type, empty encoding */ cache;
}

- (id)initWithPlatform:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPlatform:(id)a0 andAgent:(id)a1;
- (id)newInternalClient:(unsigned long long)a0;

@end
