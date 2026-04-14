@interface LASecAccessControl : NSObject

+ (struct __SecAccessControl { } *)denyAllACL;
+ (id)constraintsFromACL:(struct __SecAccessControl { } *)a0;
+ (id)serializeACL:(struct __SecAccessControl { } *)a0;
+ (struct __SecAccessControl { } *)deserializeACL:(id)a0;
+ (struct __SecAccessControl { } *)allowAllACL;

@end
