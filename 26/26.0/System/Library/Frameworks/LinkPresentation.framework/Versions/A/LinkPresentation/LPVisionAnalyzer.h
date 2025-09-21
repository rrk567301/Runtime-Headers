@class VNSession;

@interface LPVisionAnalyzer : NSObject {
    void /* unknown type, empty encoding */ _sessionBox;
}

@property (nonatomic, readonly) VNSession *session;

- (id)init;
- (void).cxx_destruct;
- (id)computeSimilarityOfFirstImage:(id)a0 with:(id)a1 error:(id *)a2;
- (struct CGImage { } *)resampleAndCropWithImage:(id)a0 width:(long long)a1 height:(long long)a2;

@end
