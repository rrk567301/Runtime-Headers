@interface PETEventStringValidator : NSObject

+ (BOOL)stringIsValid:(id)a0;
+ (BOOL)dictionaryContainsValidStrings:(id)a0;
+ (id)sanitizedString:(id)a0;
+ (BOOL)setContainsValidStrings:(id)a0;
+ (id)sanitizedSet:(id)a0;
+ (id)sanitizedDictionary:(id)a0;

@end
