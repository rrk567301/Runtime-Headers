@class NSString, NSDictionary;

@interface WiFiAwarePairedDeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long deviceID;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *pairingName;
@property (readonly, copy, nonatomic) NSString *vendorName;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSDictionary *attributes;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 pairingName:(id)a1 vendorName:(id)a2 modelName:(id)a3 attributes:(id)a4;
- (id)initWithName:(id)a0 vendorID:(id)a1 modelName:(id)a2 attributes:(id)a3;

@end
