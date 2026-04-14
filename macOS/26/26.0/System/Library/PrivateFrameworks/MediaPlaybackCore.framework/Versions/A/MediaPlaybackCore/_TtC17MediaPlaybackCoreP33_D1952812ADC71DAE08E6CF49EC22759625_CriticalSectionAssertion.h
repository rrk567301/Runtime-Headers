@class NSString;

@interface _TtC17MediaPlaybackCoreP33_D1952812ADC71DAE08E6CF49EC22759625_CriticalSectionAssertion : NSObject <MPCCriticalSectionAssertion> {
    void /* function */ name;
    void /* unknown type, empty encoding */ onInvalidate;
    void /* unknown type, empty encoding */ _invalid;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL invalidated;

- (BOOL)isInvalidated;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;

@end
