@class NSString, NSUUID;

@interface DNDRequestDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSUUID *auditUUID;
@property (readonly) unsigned long long timestamp;

+ (id)detailsRepresentingNowWithClientIdentifier:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 auditUUID:(id)a1 timestamp:(unsigned long long)a2;

@end
