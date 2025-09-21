@class NSString, NSArray;

@interface RWIProtocolRuntimeObjectPreview : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (nonatomic) char lossless;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) char overflow;
@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSArray *entries;
@property (nonatomic) int size;

- (id)initWithType:(long long)a0 lossless:(char)a1;

@end
