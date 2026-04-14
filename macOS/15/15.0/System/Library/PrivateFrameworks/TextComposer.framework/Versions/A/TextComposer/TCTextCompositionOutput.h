@class NSString, NSDictionary, NSArray, NSAttributedString;

@interface TCTextCompositionOutput : NSObject <NSCopying, NSSecureCoding> {
    NSAttributedString *_rewrittenAttributedString;
    NSArray *_inputLengths;
    NSArray *_outputLengths;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *rewrittenString;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, copy) NSDictionary *options;

+ (id)stubbedTableStringFromString:(id)a0 tagger:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateRewrittenAttributedStringsWithInput:(id)a0 usingBlock:(id /* block */)a1;
- (id)attributedStringForListOutput:(id)a0 input:(id)a1 handleTitles:(BOOL)a2 tagger:(id)a3 error:(id *)a4;
- (id)attributedStringForResults:(id)a0 input:(id)a1;
- (id)attributedStringForTablesOutput:(id)a0 input:(id)a1 tagger:(id)a2 error:(id *)a3 textModificationBlock:(id /* block */)a4;
- (id)initWithInput:(id)a0 listString:(id)a1 resultOptions:(id)a2 tagger:(id)a3 error:(id *)a4;
- (id)initWithInput:(id)a0 results:(id)a1 resultOptions:(id)a2;
- (id)initWithInput:(id)a0 rewrittenString:(id)a1;
- (id)initWithInput:(id)a0 rewrittenString:(id)a1 resultOptions:(id)a2 tagger:(id)a3;
- (id)initWithInput:(id)a0 tableString:(id)a1 resultOptions:(id)a2 tagger:(id)a3 error:(id *)a4 textModificationBlock:(id /* block */)a5;
- (id)initWithInput:(id)a0 takeawayString:(id)a1 resultOptions:(id)a2 tagger:(id)a3 error:(id *)a4;
- (id)initWithRewrittenAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inputLengths:(id)a2 outputLengths:(id)a3 options:(id)a4;
- (id)inputLengths;
- (id)outputLengths;
- (id)rewrittenAttributedString;
- (id)rewrittenAttributedStringWithInput:(id)a0;

@end
