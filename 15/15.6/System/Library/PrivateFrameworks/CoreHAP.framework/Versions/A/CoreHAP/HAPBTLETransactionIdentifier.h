@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)shortDescription;
- (id)descriptionWithPointer:(char)a0;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
