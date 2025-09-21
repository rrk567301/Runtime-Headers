@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *inputMode;
@property (readonly, nonatomic) NSString *softwareLayout;
@property (readonly, nonatomic) NSString *hardwareLayout;
@property (nonatomic) char hasCandidateKey;
@property (nonatomic) char hasAccentKey;
@property (nonatomic) char canMultitap;
@property (nonatomic) char isAlphabeticPlane;
@property (nonatomic) char isKanaPlane;
@property (nonatomic) char diacriticForwardCompose;
@property (copy, nonatomic) NSString *layoutTag;
@property (nonatomic) long long userInterfaceIdiom;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
