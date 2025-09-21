@class NSString;

@interface AFVoiceCommandGrammarParamMatch : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
