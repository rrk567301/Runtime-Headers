@class NSString, NSArray;

@interface FCLocalArea : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *bbox;
@property (readonly, nonatomic) char isBboxValid;
@property (readonly, nonatomic) double minLat;
@property (readonly, nonatomic) double maxLat;
@property (readonly, nonatomic) double minLon;
@property (readonly, nonatomic) double maxLon;
@property (readonly, nonatomic) NSArray *regionIds;
@property (readonly, nonatomic) NSString *areaID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (char)containsLocation:(id)a0;
- (char)containsPointAtLatitude:(double)a0 longitude:(double)a1;
- (id)initWithIdentifier:(id)a0 bbox:(id)a1 regionIDs:(id)a2;
- (char)isValue:(double)a0 betweenValue:(double)a1 andValue:(double)a2;

@end
