@class NSString;

@interface SMNMigrationInfoAction : SMNAction

@property unsigned long long migrationRequestType;
@property (copy) NSString *migrationRequestUUID;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
