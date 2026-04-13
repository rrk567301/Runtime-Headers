@class NSNumber, NSSet;

@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *volume;
@property (readonly, nonatomic) NSSet *codecs;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVolume:(id)a0 codecs:(id)a1;

@end
