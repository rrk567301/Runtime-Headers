@class NSString, NSColor;

@interface PIPPrerollAttributes : NSObject <NSCopying, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrappedValue;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) double requiredLinearPlaybackEndTime;
@property (nonatomic, readonly) NSColor *preferredTintColor;

+ (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(double)a0 preferredTintColor:(id)a1;
+ (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(double)a0 preferredTintColor:(id)a1;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(double)a0 preferredTintColor:(id)a1;
- (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(double)a0 preferredTintColor:(id)a1;

@end
