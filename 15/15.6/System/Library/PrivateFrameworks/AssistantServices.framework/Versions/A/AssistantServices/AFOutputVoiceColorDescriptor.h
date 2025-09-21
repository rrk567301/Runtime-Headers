@class NSString;

@interface AFOutputVoiceColorDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *hexColor;
@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, nonatomic) float alpha;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceColor;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoice;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithHexColor:(id)a0 colorName:(id)a1 alpha:(float)a2 localizedOutputVoiceColor:(id)a3 localizedOutputVoice:(id)a4;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
