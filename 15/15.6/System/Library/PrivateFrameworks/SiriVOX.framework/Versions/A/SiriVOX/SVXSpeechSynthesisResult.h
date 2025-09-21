@class SVXSpeechSynthesisUtteranceInfo, NSError;

@interface SVXSpeechSynthesisResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) SVXSpeechSynthesisUtteranceInfo *utteranceInfo;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithType:(long long)a0 utteranceInfo:(id)a1 error:(id)a2;

@end
