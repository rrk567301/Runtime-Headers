@interface NUChannelMediaTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long mediaType;

- (BOOL)match:(id)a0;
- (id)initWithMediaType:(long long)a0;
- (id)init;
- (id)description;

@end
