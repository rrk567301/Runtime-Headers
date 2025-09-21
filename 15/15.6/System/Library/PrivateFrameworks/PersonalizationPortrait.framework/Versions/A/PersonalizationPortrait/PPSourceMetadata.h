@class NSSet;

@interface PPSourceMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int dwellTimeSeconds;
@property (readonly, nonatomic) unsigned int lengthSeconds;
@property (readonly, nonatomic) unsigned int lengthCharacters;
@property (readonly, nonatomic) unsigned short donationCount;
@property (readonly, nonatomic) unsigned short contactHandleCount;
@property (readonly, nonatomic) unsigned char flags;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFlags:(unsigned char)a0;
- (id)featureValueForName:(id)a0;
- (id)initWithDwellTimeSeconds:(unsigned int)a0 lengthSeconds:(unsigned int)a1 lengthCharacters:(unsigned int)a2 donationCount:(unsigned short)a3 contactHandleCount:(unsigned short)a4 flags:(unsigned char)a5;
- (char)isEqualToSourceMetadata:(id)a0;

@end
