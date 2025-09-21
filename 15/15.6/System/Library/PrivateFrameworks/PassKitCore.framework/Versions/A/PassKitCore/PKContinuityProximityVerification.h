@interface PKContinuityProximityVerification : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)verificationWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithType:(unsigned long long)a0;
- (id)_dictionaryRepresentation;

@end
