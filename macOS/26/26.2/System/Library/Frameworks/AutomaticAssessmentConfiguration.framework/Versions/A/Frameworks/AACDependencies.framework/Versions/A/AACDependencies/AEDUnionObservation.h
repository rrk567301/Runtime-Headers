@class NSArray;

@interface AEDUnionObservation : NSObject <AEDObservation> {
    NSArray *_observations;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;

@end
