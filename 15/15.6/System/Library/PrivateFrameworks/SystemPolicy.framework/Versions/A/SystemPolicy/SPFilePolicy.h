@interface SPFilePolicy : NSObject

+ (id)getAllowedPaths;
+ (char)dragIsAllowedToTarget:(id)a0 fromAliasOrSymlink:(id)a1 withError:(id *)a2;

@end
