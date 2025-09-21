@class NSString;

@interface NUChannelNameMatching : NUChannelMatching

@property (readonly, nonatomic) NSString *name;

- (id)init;
- (id)description;
- (BOOL)match:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
