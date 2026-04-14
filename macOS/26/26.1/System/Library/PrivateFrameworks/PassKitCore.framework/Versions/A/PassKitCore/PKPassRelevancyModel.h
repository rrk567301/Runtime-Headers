@interface PKPassRelevancyModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isRelevancyActive) BOOL relevancyActive;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithRelevancyActive:(BOOL)a0;

@end
