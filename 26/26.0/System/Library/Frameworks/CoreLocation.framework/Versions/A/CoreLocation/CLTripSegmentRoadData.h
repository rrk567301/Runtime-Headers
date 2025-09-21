@class NSArray, CLLocationCoordinate;

@interface CLTripSegmentRoadData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long roadID;
@property (readonly, nonatomic) unsigned long long clRoadID;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) int formOfWay;
@property (readonly, nonatomic) NSArray *coordinates;
@property (readonly, nonatomic) unsigned long long connectingCLRoadID;
@property (readonly, nonatomic) CLLocationCoordinate *connectingRoadStartCoordinate;
@property (readonly, nonatomic) CLLocationCoordinate *connectingRoadEndCoordinate;
@property (readonly, nonatomic) double familiarityIndex;
@property (readonly, nonatomic) double sequenceNumber;

- (BOOL)isValid;
- (void)setSequenceNumber:(double)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (double)getLength;
- (id)initWithRoadID:(unsigned long long)a0 clRoadID:(unsigned long long)a1 roadClass:(int)a2 formOfWay:(int)a3 coordinates:(id)a4;
- (BOOL)isEqualStartLatitude:(double)a0 startLongitude:(double)a1 endLatitude:(double)a2 endlongitude:(double)a3;
- (void)setConnectingCLRoadID:(unsigned long long)a0;
- (void)setConnectingRoadStartCoordinate:(id)a0 endCoordinate:(id)a1;
- (void)setFamiliarityIndex:(double)a0;

@end
