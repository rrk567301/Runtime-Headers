@class NSString;

@interface _LSPersonaWithAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString *_personaUniqueString;
    unsigned long long _personaType;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
