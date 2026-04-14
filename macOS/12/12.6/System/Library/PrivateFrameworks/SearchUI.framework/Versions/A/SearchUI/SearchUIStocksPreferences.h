@interface SearchUIStocksPreferences : NSObject

@property (readonly, nonatomic, getter=isChangeColorSwapped) BOOL changeColorSwapped;
@property (readonly, nonatomic) unsigned long long textDirection;
@property (readonly, nonatomic) BOOL textAttachmentDirectionIsRightToLeft;

+ (id)sharedPreferences;
+ (void)clearSharedPreferences;

- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)synchronize;
- (BOOL)boolForKey:(id)a0;
- (void)resetLocale;

@end
