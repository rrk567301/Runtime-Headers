@interface IDSDestinationDefaultPairedDevice : IDSDestination

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)destinationURIs;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToIDSDestinationDefaultPairedDevice:(id)a0;

@end
