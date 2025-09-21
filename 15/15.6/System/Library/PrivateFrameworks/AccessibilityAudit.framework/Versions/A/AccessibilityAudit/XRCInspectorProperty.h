@class AXAuditElement, AXAuditElementAttribute, NSString;
@protocol XRCInspectorPropertyDelegate;

@interface XRCInspectorProperty : NSObject

@property (retain, nonatomic) AXAuditElementAttribute *elementAttribute;
@property (retain, nonatomic) AXAuditElement *element;
@property (readonly, nonatomic) NSString *title;
@property (weak, nonatomic) id<XRCInspectorPropertyDelegate> delegate;
@property (nonatomic) char valueKnown;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id valueForDisplayOverride;

+ (void)_continueFetchingProperties:(id)a0 fetchedProperties:(id)a1 fetchedValues:(id)a2 completionBlock:(id /* block */)a3;
+ (void)fetchValuesForProperties:(id)a0 completionBlock:(id /* block */)a1;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setNewValue:(id)a0;
- (void)performAction;
- (void)previewElement:(id)a0;
- (void)focusOnElement:(id)a0;
- (id)_OSXConstantsToSelectorsDict;
- (id)_OSXSelectorForAction:(id)a0;
- (id)_OSXSelectorForAttribute:(id)a0;
- (id)_spacedStringFromCamelCase:(id)a0;
- (void)fetchValueWithCompletionBlock:(id /* block */)a0;
- (char)showElementClassName;
- (char)showIgnoredElements;

@end
