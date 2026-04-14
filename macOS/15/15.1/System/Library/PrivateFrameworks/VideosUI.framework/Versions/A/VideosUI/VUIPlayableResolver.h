@interface VUIPlayableResolver : NSObject

+ (id)appContext;
+ (void)playableForAdamID:(id)a0 completion:(id /* block */)a1;
+ (void)playableForCanonicalID:(id)a0 showID:(id)a1 mediaType:(id)a2 completion:(id /* block */)a3;
+ (void)trailerPlayableForCanonicalID:(id)a0 entityType:(id)a1 completion:(id /* block */)a2;

@end
