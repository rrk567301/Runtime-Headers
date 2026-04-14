@class NSString, WiFiAwareBandSchedule, WiFiMACAddress, NSArray, NSNumber;

@interface WiFiAwareRadioSchedule : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) WiFiMACAddress *interfaceAddr;
@property (nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) WiFiAwareBandSchedule *band24GHz;
@property (readonly, nonatomic) WiFiAwareBandSchedule *band5GHz;
@property (readonly, nonatomic) BOOL supportsDualBand;
@property (readonly, nonatomic) BOOL supportsSimultaneousDualBand;
@property (readonly, nonatomic) NSNumber *primaryChannel;
@property (readonly, nonatomic) NSNumber *primaryChannelClass;
@property (readonly, nonatomic) NSNumber *secondaryChannel;
@property (readonly, nonatomic) NSNumber *secondaryChannelClass;
@property (readonly, nonatomic) NSNumber *infraChannel;
@property (readonly, nonatomic) NSNumber *infraChannelClass;
@property (readonly, nonatomic) unsigned int preferredChannelsCount;
@property (readonly, nonatomic) NSArray *preferredChannelNumbers;
@property (readonly, nonatomic) NSArray *preferredChannelClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)detailedDescriptionWithChangedOptions:(id)a0 previousSchedule:(id)a1;
- (id)detailedDescriptionWithChangedOptions:(id)a0 previousSchedule:(id)a1 forceAllChangedOptions:(BOOL)a2;
- (id)initWithInterfaceName:(id)a0 interfaceAddr:(id)a1 isEnabled:(BOOL)a2 band24GHz:(id)a3 band5GHz:(id)a4 supportsDualBand:(BOOL)a5 supportsSimultaneousDualBand:(BOOL)a6 primaryChannel:(id)a7 secondaryChannel:(id)a8 infraChannel:(id)a9 preferredChannelsCount:(unsigned int)a10 preferredChannelNumbers:(id)a11;

@end
