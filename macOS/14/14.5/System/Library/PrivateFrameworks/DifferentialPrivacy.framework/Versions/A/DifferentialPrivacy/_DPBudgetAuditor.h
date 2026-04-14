@class NSDictionary;

@interface _DPBudgetAuditor : NSObject

@property (readonly, nonatomic) double defaultLocalEpsilon;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) NSDictionary *plistParameters;
@property (readonly, nonatomic) BOOL isInternalBuild;

+ (BOOL)isDediscoV1:(id)a0;
+ (BOOL)isMetadataValid:(id)a0 plistParameters:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)createSymmetricRAPPORWithError:(id *)a0;
- (id)auditedMetadataForSymmetricRAPPOR:(id)a0 error:(id *)a1;
- (id)initWithDefaultLocalEpsilon:(double)a0 metadata:(id)a1 plistParameters:(id)a2 error:(id *)a3;
- (id)initWithDefaultLocalEpsilon:(double)a0 metadata:(id)a1 plistParameters:(id)a2 isInternalBuild:(BOOL)a3 error:(id *)a4;

@end
