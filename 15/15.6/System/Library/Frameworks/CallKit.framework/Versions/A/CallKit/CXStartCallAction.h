@class NSUUID, NSArray, NSString, NSDate, CXHandle;

@interface CXStartCallAction : CXCallAction <CXVideoAspectRatioDescriptor>

@property (copy, nonatomic) NSDate *dateStarted;
@property (nonatomic, getter=isRelay) char relay;
@property (nonatomic, getter=isUpgrade) char upgrade;
@property (nonatomic, getter=isRetry) char retry;
@property (nonatomic, getter=isEmergency) char emergency;
@property (nonatomic, getter=isVoicemail) char voicemail;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (retain, nonatomic) NSUUID *localSenderIdentityUUID;
@property (nonatomic) char shouldSuppressInCallUI;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) CXHandle *handle;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic, getter=isVideo) char video;
@property (nonatomic) struct CGSize { double width; double height; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } localPortraitAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (double)timeout;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (id)customDescription;
- (void)fulfillWithDateStarted:(id)a0;
- (id)initWithCallUUID:(id)a0 handle:(id)a1;
- (id)initWithCallUUID:(id)a0 handles:(id)a1;
- (char)shouldTimeout;
- (void)updateAsFulfilledWithDateStarted:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
