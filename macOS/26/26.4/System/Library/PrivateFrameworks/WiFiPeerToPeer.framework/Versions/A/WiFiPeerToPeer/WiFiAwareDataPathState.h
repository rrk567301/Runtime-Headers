@class NSString, NSArray, WiFiMACAddress;

@interface WiFiAwareDataPathState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) WiFiMACAddress *interfaceAddr;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) unsigned int totalSessionCounter;
@property (readonly, nonatomic) unsigned int establishedSessionCounter;
@property (readonly, nonatomic) unsigned int sessionWith24GOnlyPeerCount;
@property (readonly, nonatomic) unsigned int rtmSessionRefCount;
@property (readonly, nonatomic) unsigned int rtmSessionWith24GOnlyCount;
@property (readonly, nonatomic) unsigned int rtmLowLatencySessionRefCount;
@property (readonly, nonatomic) NSArray *ndiInfos;
@property (readonly, nonatomic) NSArray *preferredChannelNumbers;
@property (readonly, nonatomic) NSArray *preferredChannelClasses;
@property (readonly, nonatomic) NSArray *ndiSessionInfos;

+ (id)currentState;
+ (id)queryNANDataPathState;
+ (id)queryNANDataPathState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithChangedOptions:(id)a0;
- (id)descriptionWithChangedOptions:(id)a0 forceAllChangedOptions:(BOOL)a1;
- (id)getFormattedDataPathStateDescription;
- (id)initWithInterfaceName:(id)a0 interfaceAddr:(id)a1 isEnabled:(BOOL)a2 totalSessionCounter:(unsigned int)a3 establishedSessionCounter:(unsigned int)a4 sessionWith24GOnlyPeerCount:(unsigned int)a5 rtmSessionRefCount:(unsigned int)a6 rtmSessionWith24GOnlyCount:(unsigned int)a7 rtmLowLatencySessionRefCount:(unsigned int)a8 ndiInfos:(id)a9 preferredChannelNumbers:(id)a10 preferredChannelClasses:(id)a11 ndiSessionInfos:(id)a12;
- (int)mapSessionStateToNumber:(unsigned long long)a0;
- (id)stringForQosType:(unsigned int)a0;
- (id)stringForSecurity:(unsigned char)a0;
- (id)stringForSessionState:(unsigned long long)a0;

@end
