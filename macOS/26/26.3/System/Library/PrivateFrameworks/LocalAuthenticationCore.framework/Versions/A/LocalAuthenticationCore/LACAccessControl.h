@interface LACAccessControl : NSObject

+ (struct __SecAccessControl { } *)deserializeACL:(id)a0;
+ (struct __SecAccessControl { } *)allowAllACL;
+ (id)constraintsFromACL:(struct __SecAccessControl { } *)a0;
+ (struct __SecAccessControl { } *)denyAllACL;
+ (id)serializeACL:(struct __SecAccessControl { } *)a0;
+ (BOOL)_checkConstraints:(id)a0 contain:(id)a1;
+ (BOOL)checkACL:(id)a0 hasConstraint:(id)a1 forOperation:(id)a2;
+ (BOOL)checkACLAllowsAll:(id)a0;

@end
