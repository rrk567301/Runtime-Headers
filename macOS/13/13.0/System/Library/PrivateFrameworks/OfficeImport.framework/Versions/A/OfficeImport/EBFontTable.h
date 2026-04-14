@interface EBFontTable : NSObject

+ (void)readWithState:(id)a0;
+ (unsigned long long)edFontIndexFromXlFontIndex:(unsigned int)a0;
+ (unsigned int)xlFontIndexFromEDFontIndex:(unsigned long long)a0;

@end
