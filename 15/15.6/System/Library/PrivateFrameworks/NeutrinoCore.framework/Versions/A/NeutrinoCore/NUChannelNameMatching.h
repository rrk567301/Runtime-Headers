@class NSString;

@interface NUChannelNameMatching : NUChannelMatching

@property (readonly, nonatomic) NSString *name;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (char)match:(id)a0;

@end
