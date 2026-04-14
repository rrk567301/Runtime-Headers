@class AFPeerInfo;

@interface AFPeerContentTuple : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AFPeerInfo *info;
@property (readonly, copy, nonatomic) id content;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0 content:(id)a1;

@end
