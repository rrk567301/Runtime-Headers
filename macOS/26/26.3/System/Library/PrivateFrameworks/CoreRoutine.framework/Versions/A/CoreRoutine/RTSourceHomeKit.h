@class NSString;

@interface RTSourceHomeKit : RTSource

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL primary;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 primary:(BOOL)a1;

@end
