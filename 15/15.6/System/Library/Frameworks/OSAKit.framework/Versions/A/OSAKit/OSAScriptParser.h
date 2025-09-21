@class OSAScriptElement, NSString, NSMutableCharacterSet, NSMutableArray, NSCharacterSet, OSAScript;

@interface OSAScriptParser : NSObject {
    OSAScript *_script;
    NSString *_text;
    OSAScriptElement *_element;
    char _needsParsed;
    NSCharacterSet *_whitespaceSet;
    NSCharacterSet *_whitespaceAndNewLineSet;
    NSMutableCharacterSet *_alphanumericSet;
    NSCharacterSet *_colonSet;
    OSAScriptElement *_currentElement;
    unsigned short _currentChar;
    unsigned long long _currentLoc;
    unsigned long long _currentLine;
    NSMutableArray *_locationStack;
}

+ (id)keywords;
+ (id)parserWithText:(id)a0;
+ (id)parserWithScript:(id)a0;

- (void)dealloc;
- (id)init;
- (char)parse;
- (id)element;
- (void)setElement:(id)a0;
- (id)text;
- (void)setText:(id)a0;
- (id)script;
- (void)setScript:(id)a0;
- (id)initWithText:(id)a0;
- (void)pushLocation:(unsigned long long)a0;
- (id)initWithScript:(id)a0;
- (id)eventHandlerNames;
- (id)getEventHandlerElementFromBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (id)getNextTokenFromBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (id)getStringUntilEndOfLineFromBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (unsigned long long)popLocation;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })popRangeFromCurrentLocationInBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (void)pushCurrentLocationInBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (void)setNeedsParsed:(char)a0;
- (id)getArrayFromBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (id)getLongCommentFromBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (id)getStringUntilEndOfLineFromBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 preservingWhiteSpace:(char)a1;
- (char)needsParsed;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forConsideringToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forElseToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forEndToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forGlobalToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forIfToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forIgnoringToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forOnToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forPropertyToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forRepeatToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forScriptToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forTellToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forToToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forTryToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forUsingToken:(id)a1;
- (char)parseBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0 forWithToken:(id)a1;
- (char)parseUnknownUntilEndOfLineInBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })popRangeFromLocation:(unsigned long long)a0;
- (void)skipUntilEndOfLineInBuffer:(struct _NSStringBuffer { unsigned long long x0; unsigned long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned short x5[32]; unsigned short x6; unsigned short x7; } *)a0;

@end
