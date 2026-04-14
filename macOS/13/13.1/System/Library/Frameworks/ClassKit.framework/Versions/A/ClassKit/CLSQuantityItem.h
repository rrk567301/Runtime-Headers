@interface CLSQuantityItem : CLSActivityItem {
    double _quantity;
}

@property (nonatomic) double quantity;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 title:(id)a1;

@end
