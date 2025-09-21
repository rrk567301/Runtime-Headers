@interface PPSRounding : NSObject

@property (readonly) int type;
@property (readonly) unsigned long long value;

+ (id)roundUp;
+ (id)roundDown;
+ (char)isValidRounding:(int)a0 value:(unsigned long long)a1;
+ (char)isValidRoundingJSON:(id)a0;
+ (id)roundNearest;
+ (id)roundingWithJSONObject:(id)a0;
+ (id)roundingWithProto:(id)a0;

- (id)json;
- (id)initWithType:(int)a0 value:(unsigned long long)a1;
- (id)proto;

@end
