@class NSString;

@interface NUChannelNameMatching : NUChannelMatching

@property (readonly, nonatomic) NSString *name;

- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (BOOL)match:(id)a0;
- (void).cxx_destruct;

@end
