@class ISIcon;

@interface ISAliasedTypeIcon : ISTypeIcon

@property (readonly) ISIcon *moniker;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(id)a0 moniker:(id)a1;

@end
