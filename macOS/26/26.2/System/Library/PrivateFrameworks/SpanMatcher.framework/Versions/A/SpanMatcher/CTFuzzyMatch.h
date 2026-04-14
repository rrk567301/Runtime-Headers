@class NSArray, NSString;

@interface CTFuzzyMatch : NSObject {
    long long _CTdistance;
    NSArray *_CTdata;
    NSString *_CTvalue;
}

@property (readonly, nonatomic) long long distance;
@property (readonly, nonatomic) NSArray *data;
@property (readonly, copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithStringValue:(id)a0 withDistance:(long long)a1 andData:(id)a2;

@end
