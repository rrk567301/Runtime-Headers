@class NSString, PortMO, NSObject;

@interface VolumePolicyMO : NSManagedObject

@property (retain, nonatomic) NSObject *curveData;
@property (copy, nonatomic) NSString *curveType;
@property (nonatomic) float initialDB;
@property (nonatomic) float maxDB;
@property (nonatomic) float maxHybridHwDB;
@property (nonatomic) float minDB;
@property (nonatomic) float minHybridHwDB;
@property (copy, nonatomic) NSString *mode;
@property (nonatomic) float nominalHwDB;
@property (copy, nonatomic) NSString *softwareVolumeCapabilities;
@property (retain, nonatomic) PortMO *port;

+ (id)fetchRequest;

@end
