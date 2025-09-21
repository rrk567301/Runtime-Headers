@class NSString, HMCameraStreamVideoPreferences, NSArray, HMCameraStreamAudioPreferences;

@interface HMCameraStreamPreferences : NSObject <HMFObject, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) HMCameraStreamAudioPreferences *audioPreferences;
@property (retain) HMCameraStreamVideoPreferences *videoPreferences;
@property long long minimumRequiredAvailableOrInUseStreams;
@property BOOL shouldTakeOwnershipOfExistingStream;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
