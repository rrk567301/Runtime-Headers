@class NSDictionary;

@interface PHAPrivateFederatedLearningAugmentersDecoder : NSObject

@property (readonly, nonatomic) NSDictionary *augmenterNameToClass;

- (id)init;
- (void).cxx_destruct;
- (id)_generateErrorWithErrorCode:(long long)a0 errorMessage:(id)a1;
- (id)augmentersFromArray:(id)a0 error:(id *)a1;
- (id)instanceForAugmenterConfig:(id)a0 error:(id *)a1;

@end
