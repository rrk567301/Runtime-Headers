@class NSString;

@interface HMIFaceQualityEntropyOfLaplacian : HMFObject <HMFLogging> {
    int _numBins;
    int _maxLaplacianScore;
    int _minLaplacianScore;
    float _binWidth;
    float _maxScore;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _histogram;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
