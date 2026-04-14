@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)text;
- (void)setText:(id)a0;
- (unsigned long long)characterCount;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
