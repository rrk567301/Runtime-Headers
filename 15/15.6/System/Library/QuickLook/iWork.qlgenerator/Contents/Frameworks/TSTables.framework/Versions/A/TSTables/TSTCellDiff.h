@class TSSPropertyMap;

@interface TSTCellDiff : NSObject <NSCopying>

@property (retain, nonatomic) TSSPropertyMap *propertyMapToSet;
@property (retain, nonatomic) TSSPropertyMap *propertyMapToReset;
@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (readonly, nonatomic) char containsCellStyleProperties;
@property (readonly, nonatomic) char containsParagraphStyleProperties;
@property (readonly, nonatomic) char containsFormatAndValueProperties;
@property (readonly, nonatomic) char containsTextStyleProperties;
@property (readonly, nonatomic) char containsCellStyleOrCellDiffCellStyleProperties;

+ (void)initialize;
+ (id)cellDiff;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (char)containsProperty:(int)a0;
- (id)allProperties;
- (void)setObject:(id)a0 forProperty:(int)a1;
- (unsigned long long)estimatedByteSize;
- (void)setBoolValue:(char)a0 forProperty:(int)a1;
- (void)setFloatValue:(float)a0 forProperty:(int)a1;
- (void)setIntValue:(int)a0 forProperty:(int)a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)propertyMapToSetWithProperties:(id)a0;
- (char)boolValueForSetProperty:(int)a0;
- (void)collectPropertyKeysIntoIndexSet:(id)a0;
- (char)containsAnyPropertiesInSet:(id)a0;
- (char)doesResetAnyProperties:(id)a0;
- (char)doesResetProperty:(int)a0;
- (char)doesSetAnyProperties:(id)a0;
- (char)doesSetProperty:(int)a0;
- (id)objectApplyingDiffToObject:(id)a0 andUpdateInverse:(id)a1;
- (id)objectApplyingDiffToObject:(id)a0 andUpdateInverse:(id)a1 optionalConcurrentStylesheet:(id)a2;
- (id)objectForResetProperty:(int)a0;
- (id)objectForSetProperty:(int)a0;
- (void)removeObjectsToSetForProperty:(int)a0;
- (void)resetFloatValue:(float)a0 forProperty:(int)a1;
- (void)resetIntValue:(int)a0 forProperty:(int)a1;
- (void)resetObject:(id)a0 forProperty:(int)a1;
- (void)resetPropertiesFromMap:(id)a0;
- (void)setPropertiesFromMap:(id)a0;

@end
