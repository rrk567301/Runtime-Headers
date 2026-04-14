@class ENGroup;

@interface IDSDestinationEngram : IDSDestination

@property (readonly, retain, nonatomic) ENGroup *underlyingGroup;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)initWithENGroup:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
