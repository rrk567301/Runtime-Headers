@class MLMultiArray;
@protocol _TtP20CoreSpeechFoundation29CSEnhancedEndpointerModelType_;

@interface CoreSpeechFoundation.CSEnhancedEndpointerInputVectorAcoustic : NSObject <CoreSpeechFoundation.CSEnhancedEndpointerInputVector>

@property (nonatomic, retain) id<_TtP20CoreSpeechFoundation29CSEnhancedEndpointerModelType_> modelType;
@property (nonatomic, retain) MLMultiArray *multiArray;

- (id)modelName;
- (id)init;
- (id)initWithShape:(id)a0 dataType:(long long)a1 error:(id *)a2;
- (void).cxx_destruct;
- (long long)endpointerType;
- (id)multiArrayWithContext:(id)a0;

@end
