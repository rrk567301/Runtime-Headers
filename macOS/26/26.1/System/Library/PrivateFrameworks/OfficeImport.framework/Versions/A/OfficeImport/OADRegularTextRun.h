@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (id)text;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (id)init;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
