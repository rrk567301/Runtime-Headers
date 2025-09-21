@class NSString, PKDrawing;

@interface GPPromptElement : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) char isPersonHandle;
@property (nonatomic) char isSuggestableText;
@property (nonatomic) char needsConceptsExtraction;
@property (nonatomic) char needsSuggestableConceptsExtraction;
@property (copy, nonatomic) PKDrawing *drawing;
@property (readonly, nonatomic) struct CGImage { } *image;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) char isTitle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (id)initWithText:(id)a0 isPersonHandle:(char)a1 isTitle:(char)a2 isSuggestableText:(char)a3 needsConceptsExtraction:(char)a4 needsSuggestableConceptsExtraction:(char)a5;
- (id)initWithText:(id)a0 isTitle:(char)a1 isSuggestableText:(char)a2 needsConceptsExtraction:(char)a3 needsSuggestableConceptsExtraction:(char)a4;
- (id)initWithText:(id)a0 title:(id)a1 isPersonHandle:(char)a2 isSuggestableText:(char)a3 needsConceptsExtraction:(char)a4 needsSuggestableConceptsExtraction:(char)a5 drawing:(id)a6 image:(struct CGImage { } *)a7;
- (id)initWithText:(id)a0 title:(id)a1 isPersonHandle:(char)a2 isTitle:(char)a3 isSuggestableText:(char)a4 needsConceptsExtraction:(char)a5 needsSuggestableConceptsExtraction:(char)a6;

@end
