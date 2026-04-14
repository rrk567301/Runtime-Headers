@interface LAUIAuthorizationSheetAuthDBHelper : NSObject

+ (BOOL)authorizationRights:(id)a0 outRights:(struct { unsigned int x0; struct *x1; } *)a1 outError:(id *)a2;
+ (BOOL)authorizationEnvironment:(id)a0 outEnvironment:(struct { unsigned int x0; struct *x1; } *)a1 outError:(id *)a2;
+ (id)authorizationRightNames:(struct { unsigned int x0; struct *x1; } *)a0;
+ (id)authorizationEnvironment:(struct { unsigned int x0; struct *x1; } *)a0;

@end
