@class NSNumber, NSString, NSArray;

@interface FCSubscriptionLocalData : NSObject <FCJSONEncodableObjectProviding>

@property (readonly, nonatomic) NSNumber *coordinateLatitude;
@property (readonly, nonatomic) NSNumber *coordinateLongitude;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSArray *localEntityData;

+ (id)jsonDataFromLocalData:(id)a0;
+ (id)localDataFromJSONData:(id)a0;

- (id)jsonEncodableObject;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoordinateLatitude:(id)a0 coordinateLongitude:(id)a1 shortName:(id)a2 fullName:(id)a3 localEntityData:(id)a4;

@end
