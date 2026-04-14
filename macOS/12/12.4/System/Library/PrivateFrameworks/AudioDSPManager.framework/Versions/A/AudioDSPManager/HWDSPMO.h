@class NSString, NSSet, NSObject, PortMO;

@interface HWDSPMO : DSPConfigurationMO

@property (retain, nonatomic) NSObject *expectedDataSources;
@property (copy, nonatomic) NSString *presetBoxName;
@property (copy, nonatomic) NSString *presetName;
@property (retain, nonatomic) NSSet *flavor;
@property (retain, nonatomic) PortMO *port;

+ (id)fetchRequest;

@end
