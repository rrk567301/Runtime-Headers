@class NSString, NSArray, WiFiMACAddress, WiFiChannel;

@interface WiFiP2PAWDLState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) BOOL supportsSoloMode;
@property (readonly, nonatomic) NSArray *channelSequence;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) unsigned int substate;
@property (readonly, nonatomic) WiFiMACAddress *macAddress;
@property (readonly, nonatomic) WiFiChannel *peerMasterChannel;
@property (readonly, nonatomic) WiFiChannel *peerPrimaryPreferredChannel;
@property (readonly, nonatomic) WiFiChannel *peerSecondaryPreferredChannel;

+ (id)currentState;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0 supportsSoloMode:(BOOL)a1 channelSequence:(id)a2 isEnabled:(BOOL)a3 substate:(unsigned int)a4 macAddress:(id)a5 peerMasterChannel:(id)a6 peerPrimaryPreferredChannel:(id)a7 peerSecondaryPreferredChannel:(id)a8;

@end
