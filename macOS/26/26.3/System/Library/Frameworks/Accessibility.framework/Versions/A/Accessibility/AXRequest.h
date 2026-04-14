@class NSString;

@interface AXRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) AXRequest *currentRequest;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *technology;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTechnology:(id)a0;

@end
