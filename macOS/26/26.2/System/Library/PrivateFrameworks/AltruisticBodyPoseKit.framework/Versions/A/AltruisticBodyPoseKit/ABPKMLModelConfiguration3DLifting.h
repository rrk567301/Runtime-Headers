@class NSString;

@interface ABPKMLModelConfiguration3DLifting : ABPKMLModelConfiguration {
    NSString *_mlModelPath;
}

- (void).cxx_destruct;
- (id)init;
- (id)inputTensorNames;
- (id)outputTensorNames;
- (id)compiledMLModelPath;

@end
