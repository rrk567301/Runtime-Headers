@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (id)init;
- (void)setText:(id)a0;
- (id)text;
- (void).cxx_destruct;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
