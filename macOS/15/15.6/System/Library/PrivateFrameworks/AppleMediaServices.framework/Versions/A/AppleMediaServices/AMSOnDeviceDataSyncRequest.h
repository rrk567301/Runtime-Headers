@class NSString, AMSAccountIdentity, NSNumber;

@interface AMSOnDeviceDataSyncRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *datasetNamespace;
@property (readonly, nonatomic) NSString *idSource;
@property (readonly, nonatomic) NSString *idDomain;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) AMSAccountIdentity *accountIdentity;
@property (readonly, nonatomic) NSString *datasetName;
@property (readonly, nonatomic) NSString *idSuffix;
@property (readonly, nonatomic) NSNumber *afterDelay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNamespace:(id)a0 idSource:(id)a1 idDomain:(id)a2 identifier:(id)a3 accountID:(id)a4 datasetName:(id)a5 idSuffix:(id)a6 afterDelay:(id)a7;

@end
