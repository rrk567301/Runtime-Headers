@class NSLocale;

@interface TUCallTranslationRequestConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSLocale *localLocale;
@property (retain, nonatomic) NSLocale *remoteLocale;
@property (nonatomic) int translationLinks;
@property (nonatomic) int remoteAudioMode;
@property (nonatomic) int translationMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithlocalLocale:(id)a0 remoteLocale:(id)a1 translationLinks:(int)a2 remoteAudioMode:(int)a3 translationMode:(int)a4;
- (BOOL)isEqualToTUCallTranslationRequestConfiguration:(id)a0;

@end
