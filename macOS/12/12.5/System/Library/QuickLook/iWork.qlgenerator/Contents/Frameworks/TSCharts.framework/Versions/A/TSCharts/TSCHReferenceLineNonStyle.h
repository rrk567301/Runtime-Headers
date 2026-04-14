@interface TSCHReferenceLineNonStyle : TSCHBaseStyle

+ (id)properties;
+ (id)defaultStyleWithContext:(id)a0;
+ (id)defaultValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (float)defaultFloatValueForProperty:(int)a0;
+ (id)imageFillProperties;
+ (BOOL)shouldWarnWithPersistingWithoutStylesheet;
+ (int)muxDefaultPropertyForSpecificProperty:(int)a0;

- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
