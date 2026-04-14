@class NSLocale;

@interface TUCallTranslationStartRequest : TUCallTranslationRequest

@property (retain, nonatomic) NSLocale *localLocale;
@property (retain, nonatomic) NSLocale *remoteLocale;
@property (nonatomic) int translationLinks;
@property (nonatomic) int remoteAudioMode;
@property (nonatomic) int translationMode;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCall:(id)a0 configuration:(id)a1;
- (id)initWithCall:(id)a0 localLocale:(id)a1 remoteLocale:(id)a2 translationLinks:(int)a3 remoteAudioMode:(int)a4 translationMode:(int)a5;
- (BOOL)isEqualToTUCallTranslationStartRequest:(id)a0;

@end
