@class NSString;

@interface FFFeatureAttribute : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;

- (BOOL)matchesAgainst:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
