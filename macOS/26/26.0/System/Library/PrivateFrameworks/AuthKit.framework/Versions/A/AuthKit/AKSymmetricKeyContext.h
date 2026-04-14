@class NSArray, NSString;

@interface AKSymmetricKeyContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *requestedSubdomains;
@property (readonly, copy, nonatomic) NSString *clientLabel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestedSubdomains:(id)a0;
- (id)initWithRequestedSubdomains:(id)a0 clientLabel:(id)a1;

@end
