@interface SPFilePolicy : NSObject

+ (id)getAllowedPaths;
+ (BOOL)dragIsAllowedToTarget:(id)a0 fromAliasOrSymlink:(id)a1 withError:(id *)a2;
+ (BOOL)dragIsAllowedToTarget:(id)a0 fromQuarantinedVolume:(id)a1 withError:(id *)a2;
+ (id)getAllowedUrls;

@end
