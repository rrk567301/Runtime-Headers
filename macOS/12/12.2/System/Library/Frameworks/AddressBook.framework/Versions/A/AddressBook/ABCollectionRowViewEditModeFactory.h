@interface ABCollectionRowViewEditModeFactory : ABCollectionRowViewFactory

+ (id)minusSymbol;
+ (id)plusSymbol;
+ (id)buttonImageWithName:(id)a0;
+ (id)plusImage;
+ (id)minusImage;

- (void)buildAddRemoveControlsForRowView:(id)a0;
- (void)buildLabelViewForRowView:(id)a0 labelClass:(Class)a1;
- (void)buildValueViewForRowView:(id)a0;
- (void)buildPostalAddressValueViewForRowView:(id)a0;
- (void)buildPrivacyCheckboxForRowView:(id)a0;
- (void)buildLabelViewForRowView:(id)a0;
- (id)postalAddressRowViewForItem:(id)a0;
- (id)alertToneRowViewForItem:(id)a0;
- (void)buildActionGlyphsForRowView:(id)a0;
- (void)buildActionGlyphForRowView:(id)a0;
- (void)buildMessagingServiceViewForRowView:(id)a0;
- (void)buildURLFormattingValueViewForRowView:(id)a0;
- (void)buildPreferredNameValueViewForRowView:(id)a0;
- (void)buildSuggestedGlyphForRowView:(id)a0;

@end
