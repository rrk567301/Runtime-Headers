@interface AMSACLConstraintsProvider : NSObject

+ (BOOL)isActionSupported:(long long)a0 withConstraints:(id)a1;
+ (id)extendedConstraintsForStyle:(unsigned long long)a0;
+ (BOOL)isActionSupported:(long long)a0 withAcl:(struct __SecAccessControl { } *)a1;
+ (id)primaryConstraintsForStyle:(unsigned long long)a0;

- (id)init;

@end
