@class NSString, IDSDestination, NSDate;

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *dateAnswered;
@property (nonatomic) char allowBluetoothAnswerWithoutDowngrade;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) IDSDestination *endpointIDSDestination;
@property (retain, nonatomic) NSString *endpointRapportMediaSystemIdentifier;
@property (retain, nonatomic) NSString *endpointRapportEffectiveIdentifier;
@property (nonatomic) char wantsHoldMusic;
@property (nonatomic) char pauseVideoToStart;
@property (nonatomic) char downgradeToAudio;
@property (nonatomic) long long behavior;
@property (nonatomic) char sendToScreening;
@property (nonatomic) char screeningDueToUserInteraction;
@property (copy, nonatomic) NSString *uniqueProxyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } localPortraitAspectRatio;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCall:(id)a0;
- (id)initWithUniqueProxyIdentifier:(id)a0;

@end
