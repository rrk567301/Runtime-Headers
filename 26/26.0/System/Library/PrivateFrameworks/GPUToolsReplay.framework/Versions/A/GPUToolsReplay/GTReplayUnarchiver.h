@class NSSet;

@interface GTReplayUnarchiver : GTUnarchiver

@property (class, readonly) NSSet *rootResponseClassSet;
@property (class, readonly) NSSet *streamResponseClassSet;
@property (class, readonly) NSSet *batchFetchClassSet;
@property (class, readonly) NSSet *batchQueryClassSet;
@property (class, readonly) NSSet *batchDecodeClassSet;
@property (class, readonly) NSSet *profileClassSet;
@property (class, readonly) NSSet *shaderDebugClassSet;
@property (class, readonly) NSSet *ASVClassSet;
@property (class, readonly) NSSet *sessionClassSet;

+ (id)firstTopLevelResponse:(id)a0 error:(id *)a1;
+ (id)topLevelResponses:(id)a0 error:(id *)a1;

@end
