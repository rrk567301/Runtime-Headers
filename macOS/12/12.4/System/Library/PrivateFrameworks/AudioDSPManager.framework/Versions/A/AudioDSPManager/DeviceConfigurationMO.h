@class PortMO, NSObject;

@interface DeviceConfigurationMO : NSManagedObject

@property (retain, nonatomic) NSObject *dataSources;
@property (nonatomic) BOOL isInput;
@property (nonatomic) double sampleRate;
@property (retain, nonatomic) PortMO *port;

+ (id)fetchRequest;

@end
