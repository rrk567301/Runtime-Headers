@class NSString;

@interface FFFeatureAttribute : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;

- (BOOL)matchesAgainst:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)description;

@end
