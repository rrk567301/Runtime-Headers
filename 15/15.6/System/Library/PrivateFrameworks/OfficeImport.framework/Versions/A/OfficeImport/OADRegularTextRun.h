@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (id)text;
- (unsigned long long)characterCount;
- (char)isSimilarToTextRun:(id)a0;

@end
