@class NSString, NSSet;
@protocol TBScore;

@interface WiFi3BarsNetwork : NSObject <NSSecureCoding, WiFiCandidateNetwork>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *SSID;
@property (retain, nonatomic) NSSet *accessPoints;
@property (nonatomic) BOOL unwantedNetworkName;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSSet *attributes;
@property (nonatomic) BOOL matched;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long venueGroup;
@property (readonly, nonatomic) unsigned int venueType;
@property (readonly, copy, nonatomic) NSString *receivedFromDeviceName;
@property (readonly, copy, nonatomic) NSString *captiveToken;
@property (readonly, copy, nonatomic) NSString *captiveTokenAuthURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TBScore> popularityScore;
@property (readonly, nonatomic) id<TBScore> qualityScore;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNetwork:(id)a0;
- (BOOL)containsAccessPointMatchingBSSIDs:(id)a0;

@end
