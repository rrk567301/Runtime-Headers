@class NSError, APTargetingDimensions, NSString, APTapAction, NSURL, APFrequencyCapData, NSDictionary, NSUUID, APOdmlServerResponse, NSArray, APPolicyData;

@interface APRepresentationData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *contentDataIdentifier;
@property long long placementType;
@property (retain) NSString *rawAdType;
@property (retain) NSString *rawAdFormatType;
@property long long desiredPosition;
@property (retain) APPolicyData *policyData;
@property (retain) APFrequencyCapData *frequencyCapData;
@property (retain) APTargetingDimensions *targetingDimensions;
@property unsigned long long privacyMarkerPosition;
@property struct { double width; double height; } size;
@property (retain) APTapAction *tapAction;
@property (retain) NSString *adTag;
@property (retain) NSURL *videoURL;
@property double duration;
@property double skipThreshold;
@property char skipEnabled;
@property char unbranded;
@property double bitrate;
@property unsigned long long signalStrength;
@property long long connectionType;
@property (retain) NSString *articleID;
@property (retain) NSString *articleTitle;
@property (retain) NSString *advertiserName;
@property (retain) NSString *campaignData;
@property (retain) NSError *error;
@property (retain) NSString *adamID;
@property (retain) NSString *metadata;
@property (retain) NSString *journeyRelayAdGroupId;
@property (retain) NSString *journeyRelayCampaignId;
@property (retain) NSString *journeyRelayLineId;
@property char parentAppCheckEnabled;
@property (retain) NSDictionary *installAttribution;
@property long long rank;
@property long long timeToDisplay;
@property (retain) NSUUID *iAdID;
@property (retain) NSString *clientRequestID;
@property (retain) NSString *storeFront;
@property (retain) NSString *storeFrontLocale;
@property (retain) APOdmlServerResponse *odmlResponse;
@property char odmlSuccess;
@property (retain) NSString *treatmentId;
@property (retain) NSString *deploymentId;
@property (retain) NSString *experimentId;
@property (retain, nonatomic) NSDictionary *appMetadata;
@property (retain, nonatomic) NSArray *triggers;
@property (readonly) NSUUID *identifier;
@property (readonly) NSString *targetingExpressionId;

+ (id)mockRepresentationWithType:(long long)a0 contentData:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_correctNonNullableFields;

@end
