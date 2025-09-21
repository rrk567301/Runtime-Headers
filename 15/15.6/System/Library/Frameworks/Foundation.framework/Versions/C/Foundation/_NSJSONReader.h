@interface _NSJSONReader : NSObject

+ (char)validForJSON:(id)a0 depth:(unsigned long long)a1 allowFragments:(char)a2;

- (id)parseData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)parseStream:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
