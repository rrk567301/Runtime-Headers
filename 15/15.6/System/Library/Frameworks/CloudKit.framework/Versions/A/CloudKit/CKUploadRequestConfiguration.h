@class NSString, CKRecordZoneID;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *containerIdentifier;
@property (copy) NSString *applicationBundleIdentifierOverride;
@property (copy) CKRecordZoneID *repairZoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationFromBaseContainer:(id)a0;
+ (id)resolvedConfigurationWithBaseContainer:(id)a0 overrides:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromBaseContainer:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)sqliteRepresentation;

@end
