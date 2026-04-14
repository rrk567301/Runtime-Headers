@class NSString;

@interface WFWebPageToTrainingText : WFWebPageDecorator {
    NSString *categorySignature;
}

+ (id)documentSignature;
+ (id)signatureForCategory:(unsigned long long)a0;

- (void)dealloc;
- (id)rawPlainText;
- (id)categorySignature;
- (void)setCategorySignature:(id)a0;

@end
