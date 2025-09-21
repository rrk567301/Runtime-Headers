@class NSString;

@interface _LSPersonaWithAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString *_personaUniqueString;
    unsigned long long _personaType;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
