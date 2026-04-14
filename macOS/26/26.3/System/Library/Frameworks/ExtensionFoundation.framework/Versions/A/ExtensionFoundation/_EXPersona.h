@class NSString;

@interface _EXPersona : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)currentPersona;
+ (id)personaWithPersonaUniqueString:(id)a0;
+ (id)defaultPersona;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersonaUniqueString:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
