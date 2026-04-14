@class NSData, NSString, MRGroupSessionPersonInformation;

@interface MRDiscoveredGroupSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MRGroupSessionPersonInformation *hostInfo;
@property (readonly, nonatomic) unsigned char routeType;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithIdentifier:(id)a0 hostInfo:(id)a1 routeType:(unsigned char)a2;

@end
