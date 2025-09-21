@class NSString, ANSTTensorData;

@interface ANSTVideoCaptionAlgorithmCaptionState : NSObject

@property (retain, nonatomic) NSString *currentCaption;
@property (retain, nonatomic) ANSTTensorData *hiddenTensor;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHiddenTensorDescriptor:(id)a0;

@end
