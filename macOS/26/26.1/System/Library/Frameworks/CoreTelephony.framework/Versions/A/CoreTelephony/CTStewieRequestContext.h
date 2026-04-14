@class NSDictionary, NSData;

@interface CTStewieRequestContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long reason;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSData *epki;
@property (retain, nonatomic) NSData *shared;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToRequestContext:(id)a0;

@end
