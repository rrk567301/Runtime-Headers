@interface CIMMockUserDefaults : NSObject

+ (id)sharedPasteboardValueDictionary;

- (id)arrayForKey:(id)a0;
- (unsigned long long)integerForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (double)floatForKey:(id)a0;

@end
