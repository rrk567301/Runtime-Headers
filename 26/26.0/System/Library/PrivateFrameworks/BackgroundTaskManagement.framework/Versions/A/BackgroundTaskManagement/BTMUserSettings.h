@class NSMutableDictionary;

@interface BTMUserSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int uid;
@property long long generation;
@property (retain, nonatomic) NSMutableDictionary *enablementStatusByIdentifier;
@property (nonatomic) BOOL serviceManagementLoginItemsMigrated;
@property (nonatomic) BOOL launchServicesItemsImported;
@property (readonly) long long backgroundAppRefreshLoadCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
