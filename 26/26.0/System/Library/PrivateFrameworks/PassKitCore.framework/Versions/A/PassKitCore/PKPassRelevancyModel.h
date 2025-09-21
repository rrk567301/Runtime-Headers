@interface PKPassRelevancyModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isRelevancyActive) BOOL relevancyActive;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithRelevancyActive:(BOOL)a0;

@end
