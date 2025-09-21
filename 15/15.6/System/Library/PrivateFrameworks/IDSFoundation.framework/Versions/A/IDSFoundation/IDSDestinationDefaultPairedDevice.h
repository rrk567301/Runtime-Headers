@interface IDSDestinationDefaultPairedDevice : IDSDestination

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destinationURIs;
- (char)isEqualToIDSDestinationDefaultPairedDevice:(id)a0;

@end
