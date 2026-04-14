@class NSString;

@interface RTSourceHomeKit : RTSource

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL primary;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 primary:(BOOL)a1;

@end
