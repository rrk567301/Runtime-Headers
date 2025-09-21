@class NSString;

@interface WBSCRDTGeneration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) char isValid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)incrementedGenerationWithDeviceIdentifier:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0 generation:(unsigned long long)a1;

@end
