@interface UAFUser : NSObject

+ (BOOL)isMultiUser;
+ (id)currentConsoleUserWithUID:(unsigned int *)a0;
+ (id)currentUserWithNode:(id *)a0 error:(id *)a1;
+ (BOOL)isSystemUser:(id)a0 error:(id *)a1;
+ (BOOL)isSystemUserUsingUID:(unsigned int)a0;
+ (id)nameForUser:(id)a0 error:(id *)a1;
+ (id)nodeForUser:(id)a0 error:(id *)a1;
+ (id)systemUserWithNode:(id *)a0 error:(id *)a1;
+ (id)userWithNodeForUID:(id *)a0 uid:(unsigned int)a1 error:(id *)a2;
+ (id)validLocalNode;
+ (id)validLocalUsers:(id)a0 error:(id *)a1;
+ (id)validNodesWithError:(id *)a0;

@end
