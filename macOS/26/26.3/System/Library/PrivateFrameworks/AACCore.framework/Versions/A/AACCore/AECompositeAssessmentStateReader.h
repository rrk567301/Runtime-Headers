@class NSObject;
@protocol AEAssessmentStateReading;

@interface AECompositeAssessmentStateReader : NSObject <AEAssessmentStateReading> {
    NSObject<AEAssessmentStateReading> *_fileBackedReader;
    NSObject<AEAssessmentStateReading> *_accessibilityServerReader;
}

@property (nonatomic, getter=isActive) BOOL active;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFileBackedReader:(id)a0 accessibilityServerReader:(id)a1;

@end
