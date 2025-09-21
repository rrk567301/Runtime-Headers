@class NSString;

@interface HKAudioAccessoryDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, nonatomic) unsigned int productID;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, nonatomic) long long healthKitDataWriteAllowed;
@property (readonly, nonatomic) long long heartRateMonitorCapability;
@property (readonly, nonatomic) long long heartRateMonitorEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionForHKAADState:(long long)a0;
- (long long)_forAAFeatureCapability:(unsigned char)a0;
- (long long)_forAAMultiState:(char)a0;
- (id)_initWithIdentifer:(id)a0 name:(id)a1 productName:(id)a2 productID:(unsigned int)a3 model:(id)a4 writeStatus:(long long)a5 heartRateCapability:(long long)a6 heartRateState:(long long)a7;
- (id)initWithAudioAccessoryDevice:(id)a0;

@end
