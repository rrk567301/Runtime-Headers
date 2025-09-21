@class NSString;

@interface DMFOSUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *productKey;
@property (readonly, copy, nonatomic) NSString *humanReadableName;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *build;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) unsigned long long installSize;
@property (readonly, nonatomic) char isCritical;
@property (readonly, nonatomic) char restartRequired;
@property (readonly, nonatomic) char allowsInstallLater;
@property (readonly, nonatomic) char isSplat;
@property (readonly, copy, nonatomic) NSString *supplementalBuild;
@property (readonly, copy, nonatomic) NSString *supplementalVersionExtra;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProductKey:(id)a0 humanReadableName:(id)a1 productName:(id)a2 version:(id)a3 build:(id)a4 downloadSize:(unsigned long long)a5 installSize:(unsigned long long)a6 isCritical:(char)a7 restartRequired:(char)a8 allowsInstallLater:(char)a9 isSplat:(char)a10 supplementalBuild:(id)a11 supplementalVersionExtra:(id)a12;

@end
