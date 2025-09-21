@class NSString, NSMutableDictionary;

@interface WDProtocolCommand : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableDictionary *parameters;
@property (readonly, nonatomic) NSMutableDictionary *results;

+ (id)commandFromPayload:(id)a0 usingTypeDictionary:(id)a1;

- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToCommand:(id)a0;

@end
