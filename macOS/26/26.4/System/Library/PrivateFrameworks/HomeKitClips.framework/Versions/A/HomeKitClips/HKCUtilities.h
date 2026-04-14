@interface HKCUtilities : NSObject

+ (id)OPACKEncodedDataFromDictionary:(id)a0 error:(id *)a1;
+ (id)dataByCompressingData:(id)a0 error:(id *)a1;
+ (id)dataByDecompressingData:(id)a0 error:(id *)a1;
+ (id)dictionaryFromOPACKEncodedData:(id)a0 error:(id *)a1;

@end
