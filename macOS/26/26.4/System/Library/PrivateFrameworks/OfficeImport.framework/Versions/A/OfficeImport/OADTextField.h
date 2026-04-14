@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)text;
- (void)setText:(id)a0;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
