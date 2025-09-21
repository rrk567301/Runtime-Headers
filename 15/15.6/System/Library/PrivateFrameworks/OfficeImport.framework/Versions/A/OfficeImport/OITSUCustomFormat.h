@class OITSUCustomFormatData, NSMutableArray, NSString;

@interface OITSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {
    NSString *_formatNameStem;
    NSString *_formatNameTag;
    NSString *_currencyCode;
    char _currencyCodeComputed;
}

@property (readonly, nonatomic) NSMutableArray *conditionList;
@property (readonly, nonatomic) int formatType;
@property (readonly, nonatomic) OITSUCustomFormatData *defaultFormatData;
@property (readonly, nonatomic) unsigned long long conditionCount;
@property (readonly, nonatomic) NSString *formatName;
@property (readonly, nonatomic) NSString *formatNameStem;
@property (readonly, nonatomic) NSString *formatNameTag;
@property (readonly, nonatomic) NSString *currencyCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)conditionalFormatAtIndex:(unsigned long long)a0;
- (id)conditionalFormatDataForKey:(unsigned long long)a0;
- (id)conditionalFormatDataForValue:(double)a0;
- (id)conditionalFormatDataForValue:(double)a0 outKey:(unsigned long long *)a1;
- (id)customFormatWithNewName:(id)a0;
- (id)initWithName:(id)a0 formatType:(int)a1 data:(id)a2;
- (id)initWithName:(id)a0 formatType:(int)a1 data:(id)a2 conditionList:(id)a3;
- (char)isEqualWithStemNameMatching:(id)a0;
- (void)p_addConditionOfType:(int)a0 value:(double)a1 data:(id)a2;
- (char)p_isEqual:(id)a0 matchingFullName:(char)a1;
- (void)p_makeFormatNameStemAndTag;

@end
