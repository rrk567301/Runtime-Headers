@interface LNConnectionOptions : NSObject <NSCopying>

@property (nonatomic) long long authenticationPolicy;
@property (nonatomic) char initiatesAudioSession;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)newConnectionAction;

@end
