@interface CRGlobalContextObjC : NSObject

+ (long long)renameGeneration;
+ (id)newObjCReplicaFor:(id)a0;
+ (id)objCRenames;
+ (id)renameObjCSequence:(id)a0 after:(long long)a1 in:(id)a2;
+ (void)retainOrReleaseWithInitial:(id)a0 current:(id)a1 forReplica:(id)a2;
+ (void)retainOrReleaseWithInitial:(id)a0 current:(id)a1 forReplica:(id)a2 copyingFrom:(id)a3;
+ (void)retainObjCSequence:(id)a0;
+ (void)releaseObjCSequence:(id)a0;

- (id)init;

@end
