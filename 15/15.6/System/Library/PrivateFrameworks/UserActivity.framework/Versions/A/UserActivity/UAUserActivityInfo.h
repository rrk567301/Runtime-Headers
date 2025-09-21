@class NSDate, NSUUID, NSString, NSURL, NSError, NSSet, NSDictionary, SFPeerDevice, UAUserActivityAnalyticsInfo, NSMutableDictionary;

@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_payloads;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSUUID *uuid;
@property unsigned long long type;
@property (copy) NSString *title;
@property (copy) NSString *activityType;
@property (copy) NSString *dynamicActivityType;
@property (copy) NSString *teamIdentifier;
@property (copy) NSURL *webpageURL;
@property (copy) NSURL *referrerURL;
@property (copy) NSString *targetContentIdentifier;
@property (copy) NSDictionary *options;
@property (copy) NSError *encodedUserInfoError;
@property (copy) NSSet *requiredUserInfoKeys;
@property (copy) NSDate *when;
@property (copy) NSDate *lastInterestingTime;
@property (copy) NSDictionary *payloads;
@property char eligibleForHandoff;
@property char eligibleForSearch;
@property char eligibleForPublicIndexing;
@property char eligibleForReminders;
@property char eligibleForPrediction;
@property (readonly) char eligibleToAdvertise;
@property (readonly) char eligibleToAlwaysAdvertise;
@property (copy) NSDictionary *encodingOptions;
@property (copy) NSString *contentUserAction;
@property (copy) NSSet *keywords;
@property (copy) NSDate *expirationDate;
@property (copy) NSString *persistentIdentifier;
@property (copy) NSError *error;
@property (readonly, getter=isDirty) char dirty;
@property (getter=isPayloadAvailable) char payloadAvailable;
@property (getter=isPayloadRequested) char payloadRequested;
@property char active;
@property (getter=isUniversalLink) char universalLink;
@property (retain) SFPeerDevice *peerDevice;
@property (copy) NSString *peerDeviceType;
@property (copy) NSString *bundleIdentifier;
@property (retain) UAUserActivityAnalyticsInfo *wasContinuedInfo;

+ (id)encodedInfoToOldEncodedInfo:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)provenance;
- (id)statusString;
- (void)_createUserActivityStrings:(id)a0 secondaryString:(id)a1 optionalData:(id)a2;
- (id)archiveUserActivityInfo;
- (void)clearPayload;
- (void)fetchAllNearbyAppSuggestions:(id /* block */)a0;
- (id)initWithArchivedUserActivityInfo:(id)a0;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1 options:(id)a2;
- (id)initWithUserActivityInfo:(id)a0;
- (id)logString;
- (id)optionalUserActivityData;
- (id)payloadForIdentifier:(id)a0;
- (id)payloadIdentifiers;
- (char)requestPayloadWithCompletionHandler:(id /* block */)a0;
- (char)requestPayloadWithCompletionHandlerEvenIfClean:(char)a0 withCompletionHandler:(id /* block */)a1;
- (id)secondaryUserActivityString;
- (char)setPayload:(id)a0 identifier:(id)a1;
- (id)userActivityString;
- (char)wasResumedOnAnotherDeviceWithCompletionHandler:(id /* block */)a0;

@end
