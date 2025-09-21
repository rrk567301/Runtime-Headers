@class NSString, NSDictionary;

@interface CRUserDefaults : NSObject

@property (retain, nonatomic) NSString *suiteName;
@property (retain, nonatomic) NSDictionary *defaultValues;

- (id)stringForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuiteName:(id)a0;
- (id)initWithSuiteName:(id)a0 internalOnly:(BOOL)a1;
- (id)_initWithSuiteName:(id)a0 internalOnly:(BOOL)a1;

@end
