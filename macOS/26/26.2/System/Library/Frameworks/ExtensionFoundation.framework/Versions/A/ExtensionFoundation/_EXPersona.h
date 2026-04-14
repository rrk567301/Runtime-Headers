@class NSString;

@interface _EXPersona : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)defaultPersona;
+ (id)currentPersona;
+ (id)personaWithPersonaUniqueString:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPersonaUniqueString:(id)a0;

@end
