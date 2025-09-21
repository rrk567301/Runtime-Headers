@class NSDictionary, NSAttributedString, AXMSemanticText;

@interface _AXMSemanticTextCursor : NSObject {
    NSAttributedString *_text;
    AXMSemanticText *_semanticText;
    unsigned long long _length;
    unsigned long long _currentIndex;
}

@property (readonly, nonatomic) char isFinished;
@property (readonly, nonatomic) NSDictionary *currentAttributes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } remainingRange;
@property (readonly, nonatomic) char isOtherWord;
@property (readonly, nonatomic) char isWhitespace;
@property (readonly, nonatomic) char isPunctuation;
@property (readonly, nonatomic) char isProperNoun;
@property (readonly, nonatomic) char isSentenceTerminator;
@property (readonly, nonatomic) char isInLexicon;
@property (readonly, nonatomic) char isCustomPattern;
@property (readonly, nonatomic) char isDataDetector;

- (void).cxx_destruct;
- (void)advance;
- (id)initWithText:(id)a0 semanticText:(id)a1;
- (void)markCurrentIndexAsSemanticErrorAndAdvanceCursor;
- (char)processAttribute:(id)a0 getSubstring:(id *)a1 advanceCursor:(char)a2 markAsSemanticError:(char)a3 error:(id *)a4;

@end
