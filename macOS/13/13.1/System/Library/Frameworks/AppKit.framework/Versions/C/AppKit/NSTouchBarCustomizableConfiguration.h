@class NSArray, NSString;

@interface NSTouchBarCustomizableConfiguration : NSObject <NSCopying> {
    NSString *_identifier;
    NSArray *_defaultItemIdentifiers;
    NSArray *_allowedItemIdentifiers;
    NSArray *_requiredItemIdentifiers;
    NSArray *_customizedItemIdentifiers;
}

@property (readonly, copy) NSArray *presentedItemIdentifiers;
@property (copy) NSString *identifier;
@property (copy) NSArray *defaultItemIdentifiers;
@property (copy) NSArray *allowedItemIdentifiers;
@property (copy) NSArray *requiredItemIdentifiers;
@property (copy, getter=_customizedItemIdentifiers, setter=_setCustomizedItemIdentifiers:) NSArray *_customizedItemIdentifiers;

+ (id)keyPathsForValuesAffectingPresentedItemIdentifiers;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_resetCustomization;
- (void)_registerForCustomizationChangesWithIdentifier:(id)a0;
- (void)_unregisterForCustomizationChangesWithIdentifier:(id)a0;
- (void)_persistCustomizedItemIdentifiers;

@end
