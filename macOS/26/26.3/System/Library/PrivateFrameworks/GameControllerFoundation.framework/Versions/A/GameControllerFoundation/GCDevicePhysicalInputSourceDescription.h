@class NSSet, NSString, GCDevicePhysicalInputSymbolDescription;

@interface GCDevicePhysicalInputSourceDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *elementAliases;
@property (readonly) NSString *elementLocalizedName;
@property (readonly) GCDevicePhysicalInputSymbolDescription *symbol;
@property (readonly) unsigned long long direction;

+ (id)sourceWithElementAliases:(id)a0 localizedName:(id)a1 symbol:(id)a2;
+ (id)sourceWithElementAliases:(id)a0 localizedName:(id)a1 symbol:(id)a2 direction:(unsigned long long)a3;
+ (id)sourceWithElementAliases:(id)a0 localizedName:(id)a1 sfSymbolsName:(id)a2 direction:(unsigned long long)a3;
+ (id)sourceWithElementAliases:(id)a0 localizedName:(id)a1;
+ (id)sourceWithElementAliases:(id)a0 localizedName:(id)a1 sfSymbolsName:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithElementAliases:(id)a0 localizedName:(id)a1 symbol:(id)a2 direction:(unsigned long long)a3;

@end
