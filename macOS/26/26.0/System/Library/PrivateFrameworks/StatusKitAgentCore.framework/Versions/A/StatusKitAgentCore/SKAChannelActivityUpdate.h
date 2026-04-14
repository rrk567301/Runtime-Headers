@class ChannelActivityUpdate;

@interface SKAChannelActivityUpdate : NSObject

@property (retain, nonatomic) ChannelActivityUpdate *update;
@property (nonatomic) unsigned long long identifier;

- (void).cxx_destruct;
- (id)initWithChannelActivityUpdate:(id)a0 identifier:(unsigned long long)a1;

@end
