@class NSSet, NSString;

@interface CBPMPlatformMac : NSObject <CBPMPlatformSupport> {
    void /* function */ aName;
    void /* function */ bName;
}

@property (nonatomic, readonly) NSSet *supportedBudgets;
@property (nonatomic, readonly) NSString *aName;
@property (nonatomic, readonly) NSString *bName;
@property (nonatomic, readonly) float a;
@property (nonatomic, readonly) float b;

- (id)init;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (float)nitsFromWatts:(float)a0 controlRange:(struct CBClosedRange { float x0; float x1; })a1 forClient:(unsigned long long)a2;
- (float)wattsFromNits:(float)a0 controlRange:(struct CBClosedRange { float x0; float x1; })a1 forClient:(unsigned long long)a2;

@end
