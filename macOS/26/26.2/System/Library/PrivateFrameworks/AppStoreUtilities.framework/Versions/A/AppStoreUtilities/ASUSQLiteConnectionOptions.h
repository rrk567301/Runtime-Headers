@class NSString;

@interface ASUSQLiteConnectionOptions : NSObject <NSCopying>

@property (nonatomic) long long cacheSize;
@property (readonly) NSString *databasePath;
@property (copy, nonatomic) NSString *encryptionKeyId;
@property (copy, nonatomic) NSString *protectionType;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;

- (void)setCacheSizeWithNumberOfKilobytes:(long long)a0;
- (id)initWithDatabasePath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)a0;

@end
