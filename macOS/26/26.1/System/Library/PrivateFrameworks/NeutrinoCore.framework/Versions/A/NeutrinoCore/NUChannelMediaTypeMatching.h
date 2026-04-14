@interface NUChannelMediaTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long mediaType;

- (id)initWithMediaType:(long long)a0;
- (BOOL)match:(id)a0;
- (id)description;
- (id)init;

@end
