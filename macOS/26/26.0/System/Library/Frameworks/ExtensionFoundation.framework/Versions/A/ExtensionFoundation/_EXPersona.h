@class NSString;

@interface _EXPersona : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)personaWithPersonaUniqueString:(id)a0;
+ (id)defaultPersona;
+ (id)currentPersona;

- (id)initWithPersonaUniqueString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
