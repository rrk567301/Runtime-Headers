@interface QTExportOptions : NSObject <NSMutableCopying, NSCopying>

+ (id)allExportOptionsIdentifiers;
+ (id)exportOptionsIdentifiersCompatibleWithMovie:(id)a0;
+ (id)exportOptionsWithIdentifier:(id)a0;
+ (id)localizedNameForExportOptionsIdentifier:(id)a0;
+ (id)presetNameForIdentifier:(id)a0;
+ (id)templateNameForIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 exportRef:(void *)a1;

@end
