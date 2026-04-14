@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (id)init;
- (id)text;
- (void).cxx_destruct;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
