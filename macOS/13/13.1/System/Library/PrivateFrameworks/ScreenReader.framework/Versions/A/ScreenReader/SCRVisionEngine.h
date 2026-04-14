@class AXMVoiceOverVisionEngine;

@interface SCRVisionEngine : NSObject

@property (retain, nonatomic) AXMVoiceOverVisionEngine *engine;

- (id)init;
- (void).cxx_destruct;
- (id)_preferredMediaAnalysisLocale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameFromNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementAccessibilityFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)getFullTextForElement:(id)a0 toString:(id)a1;
- (void)elementsFromFeatureDictionary:(id)a0 childrenElements:(id)a1 parentElement:(id)a2 oldestElement:(id)a3;
- (void)tableElementsFromFeatureDictionary:(id)a0 parentElement:(id)a1 parentUIElement:(id)a2 oldestElement:(id)a3;
- (void)addChildrenToElement:(id)a0 withFeatureDictionary:(id)a1;
- (id)analyzeElement:(id)a0;

@end
