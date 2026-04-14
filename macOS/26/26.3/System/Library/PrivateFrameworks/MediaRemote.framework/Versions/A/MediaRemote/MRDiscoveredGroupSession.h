@class NSData, NSString, MRGroupSessionHostInfo;

@interface MRDiscoveredGroupSession : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MRGroupSessionHostInfo *hostInfo;
@property (readonly, nonatomic) long long source;

- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 hostInfo:(id)a1;
- (id)initWithIdentifier:(id)a0 hostInfo:(id)a1 source:(long long)a2;

@end
