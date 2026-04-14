@interface AVAudioHardwareAddress : NSObject

@property (readonly, nonatomic) unsigned long long selector;
@property (readonly, nonatomic) unsigned int scope;
@property (readonly, nonatomic) unsigned long long element;

- (id)description;
- (id)init;
- (id)initWithSelector:(unsigned long long)a0;
- (id)initWithSelector:(unsigned long long)a0 scope:(unsigned int)a1;
- (id)initWithSelector:(unsigned long long)a0 scope:(unsigned int)a1 element:(unsigned long long)a2;

@end
