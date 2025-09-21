@class NSString, NSMutableDictionary;

@interface WDProtocolEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableDictionary *parameters;

+ (id)eventFromPayload:(id)a0 usingTypeDictionary:(id)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (char)isEqualToEvent:(id)a0;

@end
