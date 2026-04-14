@class NSString;

@interface AVAudioSessionChannelDescription : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSString *owningPortUID;
@property (readonly, nonatomic) unsigned long long channelNumber;
@property (readonly, nonatomic) unsigned int channelLabel;

+ (id)privateCreateArray:(id)a0 portUID:(id)a1;
+ (id)privateCreate:(id)a0 portUID:(id)a1 channelNumber:(unsigned int)a2;

- (id)initWithName:(id)a0 OwningPort:(id)a1 ChannelNumber:(unsigned int)a2 ChannelLabel:(unsigned int)a3;
- (void)dealloc;
- (BOOL)isEqualToChannel:(id)a0;
- (id)init;
- (id)description;
- (struct ChannelDescriptionImpl { id x0; id x1; unsigned int x2; unsigned int x3; } *)privateGetImplementation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
