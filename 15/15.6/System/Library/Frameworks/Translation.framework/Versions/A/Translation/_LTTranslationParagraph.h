@class NSString, NSArray;

@interface _LTTranslationParagraph : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) char isFinal;
@property (readonly, copy, nonatomic) NSArray *spans;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 text:(id)a1 spans:(id)a2;
- (id)initWithIdentifier:(id)a0 text:(id)a1 spans:(id)a2 isFinal:(char)a3;
- (id)splitIntoSentences;

@end
