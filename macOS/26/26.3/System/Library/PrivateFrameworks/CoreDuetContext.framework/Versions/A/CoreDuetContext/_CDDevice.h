@class NSString;

@interface _CDDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) long long deviceClass;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic, getter=isCompanion) BOOL companion;
@property (readonly, nonatomic) unsigned long long identifier;

+ (unsigned long long)identifierForDeviceID:(id)a0;
+ (id)localDevice;

- (BOOL)matchesDeviceTypes:(unsigned long long)a0;
- (id)description;
- (id)initWithName:(id)a0 identifier:(unsigned long long)a1 deviceClass:(long long)a2;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 deviceID:(id)a1 model:(id)a2 companion:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 deviceID:(id)a1 deviceClass:(long long)a2 model:(id)a3 companion:(BOOL)a4;
- (void)encodeWithCoder:(id)a0;

@end
