@class NSDictionary, W5Peer;

@interface W5Event : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long eventID;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) W5Peer *peer;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToEvent:(id)a0;

@end
