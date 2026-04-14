@interface TKBERTLVRecord : TKTLVRecord

+ (id)parseValueFromDataSource:(id)a0 nestingLevel:(unsigned long long)a1;
+ (BOOL)isEndOfContentMarkerAtSource:(id)a0;
+ (id)parseLongFormValueFromDataSource:(id)a0 lengthByte:(unsigned long long)a1;
+ (unsigned long long)encodeNumber:(unsigned long long)a0 into:(char *)a1;
+ (BOOL)parseTagFromDataSource:(id)a0 tag:(unsigned long long *)a1;
+ (id)parseFromDataSource:(id)a0;
+ (id)zuluDateFormatter;
+ (id)dataForTag:(unsigned long long)a0;
+ (id)parseFromDataSource:(id)a0 nestingLevel:(unsigned long long)a1;
+ (id)parseShortFormValueFromDataSource:(id)a0 length:(unsigned long long)a1;
+ (id)parseValueFromDataSource:(id)a0;
+ (BOOL)parseChildTLVRecordFromSource:(id)a0 nestingLevel:(unsigned long long)a1;
+ (id)parseIndefiniteLengthValueFromDataSource:(id)a0 nestingLevel:(unsigned long long)a1;
+ (BOOL)validateIndefiniteLengthBounds:(unsigned long long)a0;

- (id)initWithTag:(unsigned long long)a0 records:(id)a1;
- (id)initWithPropertyList:(id)a0;
- (id)initWithTag:(unsigned long long)a0 value:(id)a1;
- (id)propertyList;

@end
