@class NSDictionary;

@interface FCNewsTabiUnloadGraphOnBackgroundConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL enabled;
@property (nonatomic) long long graphIdleDuration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
