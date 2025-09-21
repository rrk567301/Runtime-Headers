@class NSString;

@interface _CDDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) long long deviceClass;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic, getter=isCompanion) char companion;
@property (readonly, nonatomic) unsigned long long identifier;

+ (id)localDevice;
+ (unsigned long long)identifierForDeviceID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 deviceID:(id)a1 deviceClass:(long long)a2 model:(id)a3 companion:(char)a4;
- (id)initWithName:(id)a0 deviceID:(id)a1 model:(id)a2 companion:(char)a3;
- (id)initWithName:(id)a0 identifier:(unsigned long long)a1 deviceClass:(long long)a2;
- (char)matchesDeviceTypes:(unsigned long long)a0;

@end
