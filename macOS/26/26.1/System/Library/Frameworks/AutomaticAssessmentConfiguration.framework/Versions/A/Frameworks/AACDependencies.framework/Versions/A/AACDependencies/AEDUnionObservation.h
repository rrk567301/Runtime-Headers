@class NSArray;

@interface AEDUnionObservation : NSObject <AEDObservation> {
    NSArray *_observations;
}

- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;

@end
