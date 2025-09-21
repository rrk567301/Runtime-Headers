@class NSArray, TPPolicyVersion, NSData;

@interface TPPolicyDocument : NSObject

@property (readonly) NSArray *keyViewMapping;
@property (readonly, nonatomic) TPPolicyVersion *version;
@property (readonly, nonatomic) NSData *protobuf;

+ (id)policyDocWithHash:(id)a0 data:(id)a1;
+ (void)addIntroducersByCategory:(id)a0 toPB:(id)a1;
+ (id)introducersByCategoryFromPb:(id)a0;
+ (id)modelToCategoryFromPb:(id)a0;
+ (id)redactionWithEncrypter:(id)a0 redactionName:(id)a1 encryptionKey:(id)a2 modelToCategory:(id)a3 categoriesByView:(id)a4 introducersByCategory:(id)a5 keyViewMapping:(id)a6 error:(id *)a7;
+ (id)redactionsFromPb:(id)a0;
+ (void)addModelToCategory:(id)a0 toPB:(id)a1;
+ (void)addKeyViewMapping:(id)a0 toPB:(id)a1;
+ (BOOL)isEqualKeyViewMapping:(id)a0 other:(id)a1;
+ (id)categoriesByViewFromPb:(id)a0;
+ (void)addCategoriesByView:(id)a0 toPB:(id)a1;

- (id)encodeProtobuf;
- (id)cloneWithVersionNumber:(unsigned long long)a0 prependingCategoriesByView:(id)a1 prependingKeyViewMapping:(id)a2 prependingRedactions:(id)a3;
- (id)cloneWithVersionNumber:(unsigned long long)a0 prependingCategoriesByView:(id)a1 prependingKeyViewMapping:(id)a2;
- (id)cloneWithVersionNumber:(unsigned long long)a0;
- (id)description;
- (id)initWithHash:(id)a0 data:(id)a1;
- (unsigned long long)hash;
- (id)policyWithSecrets:(id)a0 decrypter:(id)a1 error:(id *)a2;
- (BOOL)isEqualToPolicyDocument:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)a0 modelToCategory:(id)a1 categoriesByView:(id)a2 introducersByCategory:(id)a3 redactions:(id)a4 keyViewMapping:(id)a5 userControllableViewList:(id)a6 piggybackViews:(id)a7 priorityViews:(id)a8 inheritedExcludedViews:(id)a9 hashAlgo:(long long)a10;

@end
