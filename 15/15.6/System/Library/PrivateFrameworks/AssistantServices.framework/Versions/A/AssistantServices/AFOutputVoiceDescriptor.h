@class NSString;

@interface AFOutputVoiceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedDisplay;
@property (readonly, copy, nonatomic) NSString *localizedDisplayWithRegion;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithLocalizedDisplay:(id)a0 localizedDisplayWithRegion:(id)a1;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
