@class EDString, EDResources, OADGraphicProperties, CHDFormula;

@interface CHDTrendlineLabel : NSObject {
    EDResources *mResources;
    CHDFormula *mName;
    unsigned long long mContentFormatId;
    BOOL mContentFormatDerived;
    BOOL mGeneratedText;
    BOOL mAutomaticLabelDeleted;
    OADGraphicProperties *mGraphicProperties;
}

@property (retain, nonatomic) EDString *lastCachedName;

+ (id)trendlineLabelWithResources:(id)a0;

- (id)name;
- (id)description;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (id)graphicProperties;
- (void)setName:(id)a0 chart:(id)a1;
- (id)contentFormat;
- (void)setContentFormat:(id)a0;
- (BOOL)isContentFormatDerivedFromDataPoints;
- (void)setIsContentFormatDerivedFromDataPoints:(BOOL)a0;
- (BOOL)isGeneratedText;
- (void)setGeneratedText:(BOOL)a0;
- (BOOL)isAutomaticLabelDeleted;
- (void)setAutomaticLabelDeleted:(BOOL)a0;
- (void)setGraphicProperties:(id)a0;
- (unsigned long long)contentFormatId;
- (void)setContentFormatId:(unsigned long long)a0;

@end
