@interface RTDiagnosticOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long optionsMask;

+ (id)RTDiagnosticOptionsMaskToString:(unsigned long long)a0;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setMask:(unsigned long long)a0;
- (char)hasMask:(unsigned long long)a0;
- (void)clearMask;
- (id)initWithOptionsMask:(unsigned long long)a0;

@end
