@interface HMMEphemeralContainerState : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ uptimeProvider;
    void /* unknown type, empty encoding */ _startTime;
    void /* unknown type, empty encoding */ _isActive;
    void /* unknown type, empty encoding */ _activeDuration;
}

@property (nonatomic) char isActive;
@property (nonatomic, readonly) double activeDuration;

- (id)init;
- (void).cxx_destruct;

@end
