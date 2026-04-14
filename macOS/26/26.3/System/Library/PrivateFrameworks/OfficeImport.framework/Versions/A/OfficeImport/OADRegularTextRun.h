@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (BOOL)isEmpty;
- (id)init;
- (id)text;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
