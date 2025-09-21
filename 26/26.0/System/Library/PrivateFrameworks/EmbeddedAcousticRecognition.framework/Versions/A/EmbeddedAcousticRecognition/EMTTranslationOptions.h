@class EMTStablePrefixState;

@interface EMTTranslationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enableDisambiguationAlternatives;
@property (retain, nonatomic) EMTStablePrefixState *stablePrefixState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
