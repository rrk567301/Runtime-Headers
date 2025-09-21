@interface APCPlayerEmbedInfo : NSObject

@property (readonly, nonatomic) unsigned long long estPasscodeDuration;
@property (nonatomic) unsigned long long measPasscodeDuration;

- (char)isValid;
- (id)initWithPasscodeDurationNSec:(unsigned long long)a0;

@end
