@class NSString, NSSet;
@protocol TBScore;

@interface WiFiAvailabilityNearbyCandidateNetwork : NSObject <WiFiCandidateNetwork>

@property (copy, nonatomic) NSString *receivedFromDeviceName;
@property (copy, nonatomic) NSString *SSID;
@property (readonly, nonatomic) NSSet *accessPoints;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSSet *attributes;
@property (nonatomic) BOOL matched;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long venueGroup;
@property (readonly, nonatomic) unsigned int venueType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *captiveToken;
@property (readonly, copy, nonatomic) NSString *captiveTokenAuthURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TBScore> popularityScore;
@property (readonly, nonatomic) id<TBScore> qualityScore;

- (void).cxx_destruct;
- (BOOL)containsAccessPointMatchingBSSIDs:(id)a0;

@end
