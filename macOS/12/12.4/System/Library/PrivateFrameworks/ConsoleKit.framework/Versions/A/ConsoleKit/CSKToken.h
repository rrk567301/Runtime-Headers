@interface CSKToken : CSKFilter

+ (id)tokenFromFilter:(id)a0;
+ (id)tokensFromFilters:(id)a0;
+ (void)parseString:(id)a0 forType:(long long *)a1 value:(id *)a2;

- (id)filterCopyRepresentation;

@end
