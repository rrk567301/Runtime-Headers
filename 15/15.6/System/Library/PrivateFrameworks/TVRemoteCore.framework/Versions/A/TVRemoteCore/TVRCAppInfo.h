@class NSString, NSData;

@interface TVRCAppInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) unsigned long long MRUCount;
@property (readonly, nonatomic) unsigned long long appGenre;
@property (readonly, nonatomic) long long appType;
@property (readonly, nonatomic) char isTVApp;

+ (id)appInfoWithBundleID:(id)a0 dictionary:(id)a1;
+ (id)appInfoWithLocalizedName:(id)a0 bundleID:(id)a1 imageData:(id)a2 MRUCount:(unsigned long long)a3 appGenre:(unsigned long long)a4 appType:(long long)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)appInfoWithMRUCount:(unsigned long long)a0;
- (id)initWithLocalizedName:(id)a0 bundleID:(id)a1 imageData:(id)a2 MRUCount:(unsigned long long)a3 appGenre:(unsigned long long)a4 appType:(long long)a5;

@end
