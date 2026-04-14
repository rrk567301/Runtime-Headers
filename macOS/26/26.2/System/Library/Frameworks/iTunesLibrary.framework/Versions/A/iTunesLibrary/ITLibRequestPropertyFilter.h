@class NSArray, NSString;

@interface ITLibRequestPropertyFilter : NSObject

@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) long long comparisonType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithKeys:(id)a0 value:(id)a1 comparisonType:(long long)a2;

@end
