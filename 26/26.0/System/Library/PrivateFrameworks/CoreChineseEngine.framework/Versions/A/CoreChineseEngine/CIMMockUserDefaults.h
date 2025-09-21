@interface CIMMockUserDefaults : NSObject

+ (id)sharedPasteboardValueDictionary;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (unsigned long long)integerForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (double)floatForKey:(id)a0;

@end
