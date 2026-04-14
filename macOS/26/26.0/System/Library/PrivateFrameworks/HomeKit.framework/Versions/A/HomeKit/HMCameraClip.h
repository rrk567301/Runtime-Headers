@class NSUUID, NSString, NSData, NSDate, NSSet, NSArray, NSDictionary, HMCameraClipEncryptionContext;

@interface HMCameraClip : NSObject <HMFObject, NSCopying, NSSecureCoding, HMCameraRecordingEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *streamingAssetVersion;
@property (readonly, copy) HMCameraClipEncryptionContext *encryptionContext;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDate *startDate;
@property (readonly) double duration;
@property (readonly) unsigned long long size;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isDonated) BOOL donated;
@property (readonly) long long quality;
@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSData *encryptionKey;
@property (readonly, copy) NSSet *significantEvents;
@property (readonly, copy) NSDictionary *videoAssetRequiredHTTPHeaders;
@property (readonly) BOOL canAskForUserFeedback;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSDate *dateOfOccurrence;

+ (id)shortDescription;
+ (id)requiredHTTPHeadersForStreamingAssetVersion:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueIdentifier:(id)a0 startDate:(id)a1 duration:(double)a2 size:(unsigned long long)a3 targetFragmentDuration:(double)a4 isComplete:(BOOL)a5 isDonated:(BOOL)a6 quality:(long long)a7 streamingAssetVersion:(id)a8 encryptionContext:(id)a9 significantEvents:(id)a10;

@end
