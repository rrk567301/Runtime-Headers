@class NSString, NUChannelFormat;

@interface NUChannel : NSObject <NSCopying>

@property (class, readonly, nonatomic) NUChannel *primary;
@property (class, readonly, nonatomic) NUChannel *gainMap;
@property (class, readonly, nonatomic) NUChannel *matte;
@property (class, readonly, nonatomic) NUChannel *guide;
@property (class, readonly, nonatomic) NUChannel *disparity;
@property (class, readonly, nonatomic) NUChannel *pixelRect;
@property (class, readonly, nonatomic) NUChannel *audio;

@property (readonly, nonatomic) NUChannel *elementSubchannel;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NUChannelFormat *format;
@property (readonly, nonatomic) long long index;

+ (id)controlChannelWithSetting:(id)a0 name:(id)a1;
+ (id)arrayChannel:(id)a0;
+ (id)channelForAuxiliaryImageType:(long long)a0;
+ (id)controlChannelWithSchema:(id)a0;
+ (id)controlChannelWithSchema:(id)a0 name:(id)a1;
+ (id)imageChannel:(id)a0 type:(long long)a1;
+ (id)matteChannel:(id)a0;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToChannel:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 format:(id)a1;
- (id)initWithName:(id)a0 format:(id)a1 index:(long long)a2;
- (id)subchannelAtIndex:(unsigned long long)a0;
- (id)subchannelForKey:(id)a0;
- (id)subchannels;

@end
