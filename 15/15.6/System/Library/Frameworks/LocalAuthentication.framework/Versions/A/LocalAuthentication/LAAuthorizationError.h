@interface LAAuthorizationError : NSObject

+ (id)genericErrorWithMessage:(id)a0;
+ (id)genericErrorWithStatus:(int)a0;
+ (char)isResourceNotFoundError:(id)a0;
+ (id)missingImplementation;
+ (id)resourceNotFound;
+ (id)resourceNotFoundWithMessage:(id)a0;
+ (id)resourceNotFoundWithUnderylingError:(id)a0;

@end
