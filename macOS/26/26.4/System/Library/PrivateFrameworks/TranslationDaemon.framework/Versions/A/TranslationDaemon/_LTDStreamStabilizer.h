@class EMTStablePrefixState, NSArray;

@interface _LTDStreamStabilizer : NSObject {
    EMTStablePrefixState *_stabilizationState;
    NSArray *_stableSegments;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) EMTStablePrefixState *stabilizationState;
@property (copy, nonatomic) NSArray *stableSegments;

- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
