@class NSData, NSString, MRGroupSessionHostInfo;

@interface MRDiscoveredGroupSession : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MRGroupSessionHostInfo *hostInfo;
@property (readonly, nonatomic) long long source;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 hostInfo:(id)a1;
- (id)initWithIdentifier:(id)a0 hostInfo:(id)a1 source:(long long)a2;

@end
