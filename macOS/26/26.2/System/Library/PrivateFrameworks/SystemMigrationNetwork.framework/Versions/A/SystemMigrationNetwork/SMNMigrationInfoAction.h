@class NSString;

@interface SMNMigrationInfoAction : SMNAction

@property unsigned long long migrationRequestType;
@property (copy) NSString *migrationRequestUUID;

+ (int)actionID;
+ (id)actionWithPayload:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)requestPayload;
- (BOOL)expectsAResult;

@end
