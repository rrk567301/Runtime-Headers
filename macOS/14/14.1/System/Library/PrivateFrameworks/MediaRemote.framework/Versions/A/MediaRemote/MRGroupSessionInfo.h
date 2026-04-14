@class _MRGroupSessionInfoProtobuf, NSString, MRGroupSessionPersonInformation;

@interface MRGroupSessionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _MRGroupSessionInfoProtobuf *protobuf;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MRGroupSessionPersonInformation *hostInfo;
@property (readonly, nonatomic) unsigned char routeType;
@property (readonly, nonatomic) BOOL isHosted;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 hostInfo:(id)a1 routeType:(unsigned char)a2 isHosted:(BOOL)a3;
- (id)initWithProtobuf:(id)a0;

@end
