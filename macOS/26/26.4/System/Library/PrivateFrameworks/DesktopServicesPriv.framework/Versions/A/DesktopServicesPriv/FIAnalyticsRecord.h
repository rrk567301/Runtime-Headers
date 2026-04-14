@class NSString, NSMutableDictionary;

@interface FIAnalyticsRecord : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSMutableDictionary *eventDict;

- (id)initWithEventName:(id)a0;
- (BOOL)validate;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
