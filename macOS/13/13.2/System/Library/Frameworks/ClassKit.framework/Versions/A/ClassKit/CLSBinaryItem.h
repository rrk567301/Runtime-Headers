@interface CLSBinaryItem : CLSActivityItem {
    BOOL _value;
}

@property (nonatomic) long long valueType;
@property (nonatomic) BOOL value;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 title:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 type:(long long)a2;

@end
