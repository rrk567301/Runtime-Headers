@interface NUChannelMediaTypeMatching : NUChannelMatching

@property (readonly, nonatomic) long long mediaType;

- (BOOL)match:(id)a0;
- (id)description;
- (id)init;
- (id)initWithMediaType:(long long)a0;

@end
