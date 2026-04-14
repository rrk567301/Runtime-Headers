@class NSString;

@interface NSColorAppearanceTintedModifier : NSObject <NSDynamicColorModifier> {
    NSString *_catalogColorName;
}

@property (class, readonly) NSColorAppearanceTintedModifier *focusIndicatorModifier;
@property (class, readonly) NSColorAppearanceTintedModifier *textHighlightModifier;
@property (class, readonly) NSColorAppearanceTintedModifier *selectionModifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)colorByApplyingToColor:(id)a0;
- (id)initWithCatalogColorName:(id)a0;

@end
