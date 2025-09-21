@class NSNumber, NSData;

@interface UARPManifestProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned int boardID;
@property (readonly) unsigned int chipID;
@property (readonly) unsigned long long securityDomain;
@property (readonly) char securityMode;
@property (readonly) char productionMode;
@property (retain) NSNumber *ecID;
@property (copy) NSData *nonce;
@property (retain) NSNumber *chipEpoch;
@property (retain) NSNumber *enableMixMatch;
@property char effectiveProductionMode;
@property char effectiveSecurityMode;
@property char supportsImg4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBoardID:(unsigned int)a0 chipID:(unsigned int)a1 securityDomain:(unsigned long long)a2 securityMode:(char)a3 productionMode:(char)a4;
- (const char *)securityDomainString;

@end
