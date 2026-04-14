@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)description;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
