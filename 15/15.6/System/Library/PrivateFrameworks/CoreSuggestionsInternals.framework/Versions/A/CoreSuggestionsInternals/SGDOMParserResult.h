@class NSString, NSArray;

@interface SGDOMParserResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *plainText;
@property (readonly, nonatomic) NSArray *taggedCharacterRanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlainText:(id)a0 taggedCharacterRanges:(id)a1;
- (void)insertSubject:(id)a0;
- (char)isEqualToDOMParserResult:(id)a0;

@end
