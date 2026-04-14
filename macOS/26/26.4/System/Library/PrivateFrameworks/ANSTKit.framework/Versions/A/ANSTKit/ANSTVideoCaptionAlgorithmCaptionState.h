@class NSString, ANSTTensorData;

@interface ANSTVideoCaptionAlgorithmCaptionState : NSObject

@property (retain, nonatomic) NSString *currentCaption;
@property (retain, nonatomic) ANSTTensorData *hiddenTensor;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHiddenTensorDescriptor:(id)a0;

@end
