@interface MapsSuggestionsCache : NSObject

+ (char)loadFromFilePath:(id)a0 storage:(id *)a1 ETAValidUntilDate:(id *)a2;
+ (char)saveToFilePath:(id)a0 storage:(id)a1 ETAValidUntilDate:(id)a2;

@end
