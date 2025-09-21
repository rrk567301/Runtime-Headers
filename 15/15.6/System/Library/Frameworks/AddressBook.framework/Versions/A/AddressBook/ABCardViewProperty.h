@class NSString;

@interface ABCardViewProperty : NSObject <ABCardViewProperty>

@property (copy, nonatomic) NSString *key;
@property (readonly) char shouldReloadViewOnUserEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)canRemove;
- (id)defaultLabel;
- (char)isMultiValue;
- (id)addressBookProperty;
- (char)isValue:(id)a0 equivalentToValue:(id)a1;
- (char)isValue:(id)a0 preferredToEquivalentValue:(id)a1;
- (id)actionForGlyphName:(id)a0;
- (id)actionGlyphNames;
- (char)allowsCustomLabels;
- (id)defaultLabelWithAccountName:(id)a0;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (id)initWithValueKey:(id)a0;
- (char)isLoadedAsynchronously;
- (char)isValueEmpty:(id)a0;
- (id /* block */)multiValueEntryToLabel;
- (char)needsCardViewBorderDrawing;
- (char)shouldUseAccountNameInLabel;

@end
