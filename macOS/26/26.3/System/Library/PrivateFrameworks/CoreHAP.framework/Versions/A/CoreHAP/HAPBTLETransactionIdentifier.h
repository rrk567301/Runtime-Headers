@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (id)shortDescription;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
