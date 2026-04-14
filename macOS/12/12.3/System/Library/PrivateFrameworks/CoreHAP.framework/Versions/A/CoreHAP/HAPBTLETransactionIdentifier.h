@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)shortDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
