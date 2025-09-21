@interface CKPrettyError : NSError

+ (id)testError;
+ (id)errorForAccountStatus:(long long)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 path:(id)a2 format:(id)a3;
+ (id)errorForSQLite:(struct sqlite3 { } *)a0 message:(id)a1 args:(char *)a2;
+ (id)errorWithCode:(long long)a0 format:(id)a1;
+ (id)databaseCorruptError;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 error:(id)a2 URL:(id)a3 format:(id)a4;
+ (id)secureCodableError:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;
+ (id)errorForSQLite:(struct sqlite3 { } *)a0 message:(id)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 error:(id)a2 format:(id)a3;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1 format:(id)a2;
+ (void)initialize;
+ (id)noUniqueDatabaseRowErrorIn:(SEL)a0;
+ (id)itemErrorFromError:(id)a0 forID:(id)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2 format:(id)a3;
+ (id)noMatchingDatabaseRowErrorIn:(SEL)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 format:(id)a2;
+ (id)descriptionForError:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 error:(id)a2 path:(id)a3 format:(id)a4;
+ (id)combinedErrorFromErrors:(id)a0 topLevelErrorMessage:(id)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2 error:(id)a3 format:(id)a4;
+ (id)undeprecatedDescriptionForError:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2 error:(id)a3 format:(id)a4 arguments:(char *)a5;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 URL:(id)a2 format:(id)a3;
+ (id)validationErrorWithMessage:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2 error:(id)a3 path:(id)a4 URL:(id)a5 description:(id)a6;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)CKPartialErrorDescription;
- (id)description;

@end
