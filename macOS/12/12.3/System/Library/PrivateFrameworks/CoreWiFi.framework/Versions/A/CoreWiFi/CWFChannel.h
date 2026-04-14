@interface CWFChannel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long channel;
@property (nonatomic) int flags;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int band;
@property (readonly, nonatomic) BOOL is2GHz;
@property (readonly, nonatomic) BOOL is5GHz;
@property (readonly, nonatomic) BOOL isDFS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)width;
- (BOOL)isEqualToChannel:(id)a0;
- (BOOL)is5GHz;
- (BOOL)isDFS;
- (BOOL)is2GHz;

@end
