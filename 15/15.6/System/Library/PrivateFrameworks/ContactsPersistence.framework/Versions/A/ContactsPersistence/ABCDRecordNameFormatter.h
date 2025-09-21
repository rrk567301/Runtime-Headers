@interface ABCDRecordNameFormatter : NSFormatter

@property char showPrefix;
@property char showSuffix;
@property char showCompany;
@property char showFallback;
@property char showNickname;
@property char showCompanyInFallback;
@property char showPhonetic;
@property (readonly) unsigned long long defaultNameOrder;
@property (readonly) unsigned long long defaultSortOrder;

+ (id)displayNameFormatter;

- (id)init;
- (id)stringForObjectValue:(id)a0;
- (id)initWithUserDefaults:(id)a0;
- (unsigned long long)nameOrderForRecord:(id)a0;
- (id)stringFromRecord:(id)a0;
- (id)stringFromRecord:(id)a0 rangeOfSortingSubstring:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
