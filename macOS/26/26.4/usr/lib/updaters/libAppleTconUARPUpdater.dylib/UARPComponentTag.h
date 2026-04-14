@class NSString;

@interface UARPComponentTag : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) char char1;
@property (readonly) char char2;
@property (readonly) char char3;
@property (readonly) char char4;
@property (readonly) unsigned int tag;
@property (readonly) NSString *tagString;

- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (const char *)decodeCharForKey:(id)a0 key:(id)a1;
- (id)initWithChar1:(char)a0 char2:(char)a1 char3:(char)a2 char4:(char)a3;
- (void)toLower;
- (void)toUpper;
- (BOOL)isRootLevel;

@end
