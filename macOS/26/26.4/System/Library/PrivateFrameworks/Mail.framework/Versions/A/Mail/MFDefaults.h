@class NSString;

@interface MFDefaults : NSObject

@property (readonly, copy, nonatomic) NSString *trashMailboxName;
@property (nonatomic) long long composeMode;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultNameForFlagColor:(char)a0;

- (id)stringForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)dealloc;

@end
