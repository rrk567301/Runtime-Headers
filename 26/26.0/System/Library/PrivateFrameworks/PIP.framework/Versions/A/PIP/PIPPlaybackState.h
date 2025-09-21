@class NSString, PIPPrerollAttributes;

@interface PIPPlaybackState : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrappedValue;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double contentDuration;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic, readonly) BOOL muted;
@property (nonatomic, readonly) double playbackRate;
@property (nonatomic, readonly) PIPPrerollAttributes *prerollAttributes;
@property (nonatomic, readonly) BOOL requiresLinearPlayback;
@property (nonatomic, readonly) long long timeControlStatus;

- (id)mutableCopyWithZone:(void *)a0;
- (id)mutableCopy;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (BOOL)isMuted;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
