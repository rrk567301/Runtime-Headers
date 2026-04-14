@class NSString;

@interface GPPromptElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isPersonHandle;
@property (nonatomic) BOOL isSuggestableText;
@property (nonatomic) BOOL needsConceptsExtraction;
@property (nonatomic) BOOL needsSuggestableConceptsExtraction;
@property (nonatomic) BOOL isTitle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (id)initWithText:(id)a0 isPersonHandle:(BOOL)a1 isTitle:(BOOL)a2 isSuggestableText:(BOOL)a3 needsConceptsExtraction:(BOOL)a4 needsSuggestableConceptsExtraction:(BOOL)a5;
- (id)initWithText:(id)a0 isTitle:(BOOL)a1 isSuggestableText:(BOOL)a2 needsConceptsExtraction:(BOOL)a3 needsSuggestableConceptsExtraction:(BOOL)a4;
- (id)initWithText:(id)a0 title:(id)a1 isPersonHandle:(BOOL)a2 isSuggestableText:(BOOL)a3 needsConceptsExtraction:(BOOL)a4 needsSuggestableConceptsExtraction:(BOOL)a5;

@end
