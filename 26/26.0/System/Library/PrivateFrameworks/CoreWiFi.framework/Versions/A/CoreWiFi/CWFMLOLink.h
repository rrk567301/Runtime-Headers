@interface CWFMLOLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int band;
@property (nonatomic) unsigned char channel;
@property (nonatomic) int width;
@property (nonatomic) int subchannel;
@property (nonatomic) BOOL isPrimaryLink;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMLOLink:(id)a0;

@end
