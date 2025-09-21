@interface TSCENilValue : TSCEValue

+ (id)nilValue;

- (id)value;
- (BOOL)isNil;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (char)nativeType;
- (BOOL)asBoolean:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asDate:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asNumber:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asRawString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)asString:(id)a0 functionSpec:(id)a1 argumentIndex:(int)a2 outError:(id *)a3;
- (id)canonicalKeyStringForLocale:(id)a0;

@end
