@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (BOOL)isEmpty;
- (id)init;
- (id)text;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (unsigned long long)characterCount;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
