@class NSString, NSArray, NSDate, NSNumber;

@interface SMManagedMigrationStatus : SMManagedMigrationXPCClient <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long migrationState;
@property (retain, nonatomic) NSString *sourceUser;
@property (retain, nonatomic) NSString *targetUser;
@property (retain, nonatomic) NSDate *migrationStartTime;
@property (retain, nonatomic) NSDate *migrationCompletionTime;
@property (retain, nonatomic) NSNumber *completedFileCount;
@property (retain, nonatomic) NSNumber *totalFileCount;
@property (retain, nonatomic) NSNumber *totalDataSize;
@property (retain, nonatomic) NSNumber *completedDataSize;
@property (retain, nonatomic) NSArray *errors;

- (void)resetToDefaults;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)populateFromMDM;
- (id)initForTestingWithMockDaemonProxy:(id)a0;
- (void)persistAndNotify;
- (id)stringForMigrationState;

@end
