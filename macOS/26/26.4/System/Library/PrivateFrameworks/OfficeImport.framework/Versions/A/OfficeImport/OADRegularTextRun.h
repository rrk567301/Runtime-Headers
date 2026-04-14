@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)text;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
