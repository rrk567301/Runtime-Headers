@interface FLDPGBatchFactory : NSObject

+ (BOOL)isDPGBundleID:(id)a0;
+ (BOOL)isDataSentToProd;
+ (id)makeBatchWithPayload:(id)a0 bundleID:(id)a1 schema:(id)a2;

- (id)init;

@end
