@interface NUChannelMediaTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long mediaType;

- (id)init;
- (id)description;
- (id)initWithMediaType:(long long)a0;
- (BOOL)match:(id)a0;

@end
