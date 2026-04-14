@class NSString, NSMutableDictionary;

@interface FIAnalyticsRecord : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSMutableDictionary *eventDict;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)validate;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithEventName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
