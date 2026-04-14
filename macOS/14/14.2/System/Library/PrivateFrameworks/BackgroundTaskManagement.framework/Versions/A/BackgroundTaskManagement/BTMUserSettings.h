@interface BTMUserSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int uid;
@property long long generation;
@property (nonatomic) BOOL sharedFileListMigrated;
@property (nonatomic) BOOL serviceManagementLoginItemsMigrated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
