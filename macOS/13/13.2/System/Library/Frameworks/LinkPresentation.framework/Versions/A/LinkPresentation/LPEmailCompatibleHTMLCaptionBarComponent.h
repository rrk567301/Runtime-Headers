@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

@interface LPEmailCompatibleHTMLCaptionBarComponent : LPHTMLComponent {
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)ruleDictionaryForStyle:(id)a0;
+ (id)baseRules;

- (void).cxx_destruct;
- (id)initWithStyle:(id)a0 presentationProperties:(id)a1 themePath:(id)a2 generator:(id)a3;
- (void)buildComponents;

@end
