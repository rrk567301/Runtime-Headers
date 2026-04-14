@class NSArray;

@interface ANSTExclaveObjectDetectionAlgorithmResult : ANSTResult {
    NSArray *_objects;
}

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObjects:(id)a0;
- (id)detectedObjectsForCategory:(id)a0;

@end
