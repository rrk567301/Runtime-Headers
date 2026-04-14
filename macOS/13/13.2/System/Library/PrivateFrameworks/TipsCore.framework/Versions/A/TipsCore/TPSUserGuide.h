@class NSString, TPSGradient;

@interface TPSUserGuide : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TPSGradient *gradient;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *symbol;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 version:(id)a1 text:(id)a2 symbol:(id)a3 gradientColorStrings:(id)a4;

@end
