@class VNRequestSpecifier;

@interface Vision.ImageAnalyzerMultiDetectorRecipient : NSObject <VNObservationsRecipient> {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ results;
}

@property (nonatomic, readonly) VNRequestSpecifier *originatingRequestSpecifier;

- (void).cxx_destruct;
- (id)init;
- (void)receiveObservations:(id)a0;

@end
