@class NSDictionary, SMSystem_Daemon;

@interface SMUser_Daemon : SMUser

@property (readonly) SMSystem_Daemon *sourceSystem;
@property (retain) NSDictionary *sourceLongTermSystemIdentifier;
@property (readonly) Class clientClass;

- (void).cxx_destruct;
- (char)clearUserMigratedMark;
- (char)isUserMarkedAsMigrated;
- (char)markUserAsMigrated;

@end
