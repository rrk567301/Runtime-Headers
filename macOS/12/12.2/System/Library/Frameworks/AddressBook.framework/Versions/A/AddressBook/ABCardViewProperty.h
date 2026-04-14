@class NSString;

@interface ABCardViewProperty : NSObject <ABCardViewProperty>

@property (copy, nonatomic) NSString *key;
@property (readonly) BOOL shouldReloadViewOnUserEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canRemove;
- (id)defaultLabel;
- (BOOL)isMultiValue;
- (id)addressBookProperty;
- (BOOL)isValue:(id)a0 preferredToEquivalentValue:(id)a1;
- (BOOL)isValue:(id)a0 equivalentToValue:(id)a1;
- (BOOL)isLoadedAsynchronously;
- (BOOL)isValueEmpty:(id)a0;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (BOOL)allowsCustomLabels;
- (id)initWithValueKey:(id)a0;
- (id)actionGlyphNames;
- (id)actionForGlyphName:(id)a0;
- (id /* block */)multiValueEntryToLabel;
- (BOOL)shouldUseAccountNameInLabel;
- (id)defaultLabelWithAccountName:(id)a0;
- (BOOL)needsCardViewBorderDrawing;

@end
