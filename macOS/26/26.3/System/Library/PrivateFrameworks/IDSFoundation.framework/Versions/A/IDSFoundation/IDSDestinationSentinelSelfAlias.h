@interface IDSDestinationSentinelSelfAlias : IDSDestination

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
