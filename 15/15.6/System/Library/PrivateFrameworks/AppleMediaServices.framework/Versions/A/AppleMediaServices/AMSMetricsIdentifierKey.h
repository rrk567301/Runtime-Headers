@class NSString;

@interface AMSMetricsIdentifierKey : NSObject

@property char crossDeviceSync;
@property (retain) NSString *name;
@property char isActiveITunesAccountRequired;

+ (id)keyWithName:(id)a0 crossDeviceSync:(char)a1;
+ (id)keyWithName:(id)a0 crossDeviceSync:(char)a1 isActiveITunesAccountRequired:(char)a2;

- (id)description;
- (void).cxx_destruct;

@end
