@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (id)text;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (void)setText:(id)a0;
- (id)init;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
