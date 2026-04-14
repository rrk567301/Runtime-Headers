@interface NUChannelMediaTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long mediaType;

- (id)description;
- (id)init;
- (BOOL)match:(id)a0;
- (id)initWithMediaType:(long long)a0;

@end
