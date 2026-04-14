@interface PKPassRelevancyModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isRelevancyActive) BOOL relevancyActive;

- (id)description;
- (id)init;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRelevancyActive:(BOOL)a0;

@end
