@class NSString;

@interface SUOSUCloudDevice : NSObject

@property (retain) NSString *name;
@property (retain) NSString *operatingSystemName;
@property (retain) NSString *operatingSystemVersion;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 operatingSystemName:(id)a1 operatingSystemVersion:(id)a2;

@end
