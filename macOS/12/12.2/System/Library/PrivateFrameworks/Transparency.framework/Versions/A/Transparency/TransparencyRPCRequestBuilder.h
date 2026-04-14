@interface TransparencyRPCRequestBuilder : NSObject

+ (id)buildRevisionLogInclusionProofRequest:(id)a0 logType:(int)a1 revisions:(id)a2 error:(id *)a3;
+ (id)buildConsistencyProofRequest:(id)a0 revisions:(id)a1 error:(id *)a2;
+ (id)buildQueryRequest:(id)a0 application:(id)a1 error:(id *)a2;
+ (id)buildPublicKeysRequest:(id)a0 error:(id *)a1;

@end
