@class NSDictionary, W5Peer;

@interface W5Event : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long eventID;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) W5Peer *peer;

- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToEvent:(id)a0;
- (id)description;
- (void)dealloc;

@end
