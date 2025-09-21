@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)description;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
