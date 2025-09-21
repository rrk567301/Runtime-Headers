@class NSAttributedString;

@interface ICMarkdownRepresentation : NSObject

@property (retain, nonatomic) NSAttributedString *markdown;
@property (nonatomic) BOOL keepOriginalAttributes;
@property (nonatomic) BOOL filterConflictingAttributes;

+ (id)createMarkdownStringFrom:(id)a0 context:(id)a1 rangeMapping:(id *)a2;
+ (BOOL)isMarkdownAttributedString:(id)a0;
+ (id)parseExtendedAttribute:(id)a0 token:(id)a1 markdown:(id)a2;
+ (id)parseExtendedAttributes:(id)a0;

- (void).cxx_destruct;
- (id)createRenderableAttributedString;
- (id)initWithMarkdown:(id)a0;
- (id)initWithPlainMarkdown:(id)a0 error:(id *)a1;

@end
