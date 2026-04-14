@interface PKPassRelevancyModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isRelevancyActive) BOOL relevancyActive;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)init;
- (id)initWithRelevancyActive:(BOOL)a0;

@end
