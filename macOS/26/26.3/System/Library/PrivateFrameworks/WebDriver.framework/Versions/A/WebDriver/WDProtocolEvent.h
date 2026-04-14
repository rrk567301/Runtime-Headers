@class NSString, NSMutableDictionary;

@interface WDProtocolEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableDictionary *parameters;

+ (id)eventFromPayload:(id)a0 usingTypeDictionary:(id)a1;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToEvent:(id)a0;

@end
