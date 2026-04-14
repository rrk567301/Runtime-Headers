@interface CLSQuantityItem : CLSActivityItem {
    double _quantity;
}

@property (nonatomic) double quantity;

+ (BOOL)supportsSecureCoding;

- (id)dictionaryRepresentation;
- (id)description;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1;
- (void)mergeWithObject:(id)a0;

@end
