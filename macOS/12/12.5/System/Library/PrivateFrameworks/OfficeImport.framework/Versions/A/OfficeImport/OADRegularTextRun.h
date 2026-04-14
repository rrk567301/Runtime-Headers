@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)text;
- (unsigned long long)characterCount;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
