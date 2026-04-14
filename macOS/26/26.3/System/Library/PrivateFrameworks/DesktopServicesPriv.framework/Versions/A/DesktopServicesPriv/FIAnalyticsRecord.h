@class NSString, NSMutableDictionary;

@interface FIAnalyticsRecord : NSObject

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSMutableDictionary *eventDict;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)validate;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)initWithEventName:(id)a0;

@end
