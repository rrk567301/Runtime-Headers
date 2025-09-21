@class NSString;

@interface SVXStoreDemo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long transcriptID;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) float outputVolume;

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
- (id)initWithTranscriptID:(long long)a0 languageCode:(id)a1 gender:(long long)a2 outputVolume:(float)a3;

@end
