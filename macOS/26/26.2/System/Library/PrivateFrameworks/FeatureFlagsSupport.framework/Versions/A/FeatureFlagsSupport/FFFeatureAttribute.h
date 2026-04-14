@class NSString;

@interface FFFeatureAttribute : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (BOOL)matchesAgainst:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1;

@end
