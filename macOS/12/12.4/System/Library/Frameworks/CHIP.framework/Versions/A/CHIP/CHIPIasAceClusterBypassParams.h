@class NSNumber, NSArray, NSString;

@interface CHIPIasAceClusterBypassParams : NSObject

@property (retain, nonatomic) NSNumber *numberOfZones;
@property (retain, nonatomic) NSArray *zoneIds;
@property (retain, nonatomic) NSString *armDisarmCode;

- (id)init;
- (void).cxx_destruct;

@end
