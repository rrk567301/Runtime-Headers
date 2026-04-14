@interface LNConnectionOptions : NSObject <NSCopying>

@property (nonatomic) long long authenticationPolicy;
@property (nonatomic) BOOL initiatesAudioSession;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)newConnectionAction;

@end
