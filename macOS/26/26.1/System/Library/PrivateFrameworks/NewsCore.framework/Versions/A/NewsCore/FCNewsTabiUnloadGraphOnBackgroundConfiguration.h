@class NSDictionary;

@interface FCNewsTabiUnloadGraphOnBackgroundConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL enabled;
@property (nonatomic) long long graphIdleDuration;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
