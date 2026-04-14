@class NSObject;
@protocol AEAssessmentStateReading;

@interface AEAssessmentModeGestalt : NSObject

@property (readonly, nonatomic) NSObject<AEAssessmentStateReading> *assessmentStateReader;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)makeAssessmentStateReaderWithQueue:(id)a0;
+ (id)keyPathsForValuesAffectingActive;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
