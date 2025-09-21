@class NSDictionary;

@interface CKDMMCSPackageSignatureGenerator : NSObject {
    NSDictionary *_generatorResults;
    char _usesMMCSV2;
}

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) char valid;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)dataByFinishingSignature;
- (id)initWithBoundaryKey:(id)a0;
- (id)_finishGenerator;
- (id)dataByFinishingVerificationKey;

@end
