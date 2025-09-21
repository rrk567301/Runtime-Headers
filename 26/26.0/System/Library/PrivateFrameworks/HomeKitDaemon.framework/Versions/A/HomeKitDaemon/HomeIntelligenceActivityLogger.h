@interface HomeIntelligenceActivityLogger : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ home;
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ eventStream;
    void /* unknown type, empty encoding */ activityObservers;
    void /* unknown type, empty encoding */ submitter;
}

- (void)configure;
- (id)init;
- (id)initWithHome:(id)a0;

@end
