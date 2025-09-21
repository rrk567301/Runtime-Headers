@class NSString, TBNetworkMO, NSDate;
@protocol TBScore;

@interface TBAccessPointMO : NSManagedObject <TBAccessPoint, NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *BSSID;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic, getter=isEdge) char edge;
@property (readonly, nonatomic, getter=isTCPGood) char TCPGood;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TBScore> popularityScore;
@property (readonly, nonatomic) id<TBScore> qualityScore;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSDate *created;
@property (nonatomic) char edge;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) int popularityScoreValue;
@property (nonatomic) int qualityScoreValue;
@property (nonatomic) char tcpGood;
@property (retain, nonatomic) TBNetworkMO *network;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateNewAccessPointObjectFromMOC:(id)a0;
+ (void)removeAllAccessPointsInMOC:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;

@end
