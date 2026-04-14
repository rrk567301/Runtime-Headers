@class ENGroup;

@interface IDSDestinationEngram : IDSDestination

@property (readonly, retain, nonatomic) ENGroup *underlyingGroup;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithENGroup:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)destinationURIs;
- (void).cxx_destruct;

@end
