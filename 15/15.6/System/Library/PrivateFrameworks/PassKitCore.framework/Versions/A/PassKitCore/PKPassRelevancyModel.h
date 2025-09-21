@interface PKPassRelevancyModel : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) BOOL relevancyActive;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)initWithRelevancyActive:(BOOL)a0;

@end
