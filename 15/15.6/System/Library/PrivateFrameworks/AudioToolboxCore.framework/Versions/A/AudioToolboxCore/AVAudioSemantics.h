@class NSArray;

@interface AVAudioSemantics : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *channelGroups;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioSemantics:(struct __CFArray { } *)a0;
- (id)initWithChannelGroups:(id)a0;

@end
