@class NSSet;

@interface CBPMPlatformMac : NSObject <CBPMPlatformSupport> {
    void /* unknown type, empty encoding */ table;
}

@property (nonatomic, readonly) NSSet *supportedBudgets;

- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (float)nitsFromWatts:(float)a0 controlRange:(struct CBClosedRange { float x0; float x1; })a1 forClient:(unsigned long long)a2;
- (float)wattsFromNits:(float)a0 controlRange:(struct CBClosedRange { float x0; float x1; })a1 forClient:(unsigned long long)a2;

@end
