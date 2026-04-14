@class NSString, NSMutableDictionary;

@interface WDProtocolCommand : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSMutableDictionary *parameters;
@property (readonly, nonatomic) NSMutableDictionary *results;

+ (id)commandFromPayload:(id)a0 usingTypeDictionary:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (BOOL)isEqualToCommand:(id)a0;

@end
