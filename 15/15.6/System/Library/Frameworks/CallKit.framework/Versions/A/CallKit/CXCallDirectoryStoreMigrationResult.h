@interface CXCallDirectoryStoreMigrationResult : NSObject

@property (nonatomic) long long startingSchemaVersion;
@property (nonatomic) long long endingSchemaVersion;
@property (nonatomic) char requiresExtensionDisablement;
@property (nonatomic) char requiresExtensionSynchronization;

@end
