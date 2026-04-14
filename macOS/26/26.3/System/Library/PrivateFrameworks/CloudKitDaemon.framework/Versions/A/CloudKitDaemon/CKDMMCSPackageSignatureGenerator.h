@class NSDictionary;

@interface CKDMMCSPackageSignatureGenerator : NSObject {
    NSDictionary *_generatorResults;
    BOOL _usesMMCSV2;
}

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

- (void)updateWithData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dataByFinishingSignature;
- (id)initWithBoundaryKey:(id)a0;
- (id)_finishGenerator;
- (id)dataByFinishingVerificationKey;

@end
