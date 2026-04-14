@class NSString;

@interface RWIProtocolCSSGrouping : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *sourceURL;

- (id)initWithType:(long long)a0;
- (id)initWithText:(id)a0 type:(long long)a1;

@end
