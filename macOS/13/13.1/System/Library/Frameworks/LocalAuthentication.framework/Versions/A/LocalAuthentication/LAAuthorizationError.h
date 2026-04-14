@interface LAAuthorizationError : NSObject

+ (id)resourceNotFound;
+ (id)resourceNotFoundWithMessage:(id)a0;
+ (id)resourceNotFoundWithUnderylingError:(id)a0;
+ (BOOL)isResourceNotFoundError:(id)a0;
+ (id)genericErrorWithMessage:(id)a0;
+ (id)genericErrorWithStatus:(int)a0;
+ (id)missingImplementation;

@end
