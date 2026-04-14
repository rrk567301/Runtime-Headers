@interface POAlgorithmUtil : NSObject

+ (id)bestEncryptionAlgorithm:(id)a0 or:(id)a1;
+ (id)bestSigningAlgorithm:(id)a0 or:(id)a1;
+ (id)deviceEncryptionAlgorithmToUse:(id)a0 deviceConfiguration:(id)a1;
+ (id)deviceSigningAlgorithmToUse:(id)a0 deviceConfiguration:(id)a1;
+ (id)userSigningAlgorithmToUse:(id)a0 userConfiguration:(id)a1;

@end
