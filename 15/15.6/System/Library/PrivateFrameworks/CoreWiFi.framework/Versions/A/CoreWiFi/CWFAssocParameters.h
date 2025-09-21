@class NSString, CWFEAPCredentials, SFRemoteHotspotDevice, CWFNetworkProfile, CWFScanResult;

@interface CWFAssocParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) CWFScanResult *scanResult;
@property (copy, nonatomic) CWFNetworkProfile *knownNetworkProfile;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) CWFEAPCredentials *EAPCredentials;
@property (nonatomic) char rememberUponSuccessfulAssociation;
@property (nonatomic) long long bandPreference;
@property (copy, nonatomic) NSString *colocatedScopeID;
@property (nonatomic) char forceBSSID;
@property (nonatomic) char has6GHzOnlyBSS;
@property (retain, nonatomic) SFRemoteHotspotDevice *remoteHotspotDevice;
@property (nonatomic) char findAndJoinNetwork;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAssocParameters:(id)a0;

@end
