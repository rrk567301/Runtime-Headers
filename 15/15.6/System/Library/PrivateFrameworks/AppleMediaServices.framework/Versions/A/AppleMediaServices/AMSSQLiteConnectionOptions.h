@class NSString;

@interface AMSSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic) long long cacheSize;
@property (copy, nonatomic) NSString *protectionType;
@property (nonatomic, getter=isReadOnly) char readOnly;
@property (nonatomic, getter=isCheckpointingOnCloseDisabled) char checkpointingOnCloseDisabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)applyToDatabase:(struct sqlite3 { } *)a0 error:(id *)a1;
- (id)initWithDatabasePath:(id)a0;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)a0;
- (void)setCacheSizeWithNumberOfKilobytes:(long long)a0;

@end
