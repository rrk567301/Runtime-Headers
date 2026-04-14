@class MLMultiArray;
@protocol _TtP20CoreSpeechFoundation29CSEnhancedEndpointerModelType_;

@interface CoreSpeechFoundation.CSEnhancedEndpointerInputVectorAcoustic : NSObject <CoreSpeechFoundation.CSEnhancedEndpointerInputVector>

@property (nonatomic, retain) id<_TtP20CoreSpeechFoundation29CSEnhancedEndpointerModelType_> modelType;
@property (nonatomic, retain) MLMultiArray *multiArray;

- (id)modelName;
- (void).cxx_destruct;
- (id)initWithShape:(id)a0 dataType:(long long)a1 error:(id *)a2;
- (id)init;
- (long long)endpointerType;
- (id)multiArrayWithContext:(id)a0;

@end
