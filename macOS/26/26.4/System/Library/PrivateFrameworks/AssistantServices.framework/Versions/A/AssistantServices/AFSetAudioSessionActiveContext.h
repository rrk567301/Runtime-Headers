@class AFSpeechRequestOptions;

@interface AFSetAudioSessionActiveContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long reason;
@property (readonly, copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
@property (readonly, nonatomic) long long playbackType;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 reason:(long long)a1 speechRequestOptions:(id)a2;
- (id)initWithOptions:(unsigned long long)a0 reason:(long long)a1 speechRequestOptions:(id)a2 playbackType:(long long)a3;

@end
