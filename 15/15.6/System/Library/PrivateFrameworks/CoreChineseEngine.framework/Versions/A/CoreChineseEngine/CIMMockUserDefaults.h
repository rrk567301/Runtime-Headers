@interface CIMMockUserDefaults : NSObject

+ (id)sharedPasteboardValueDictionary;

- (char)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (unsigned long long)integerForKey:(id)a0;
- (void)setBool:(char)a0 forKey:(id)a1;
- (double)floatForKey:(id)a0;

@end
