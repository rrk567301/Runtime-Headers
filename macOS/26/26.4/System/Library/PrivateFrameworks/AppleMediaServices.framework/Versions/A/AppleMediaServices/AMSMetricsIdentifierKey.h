@class NSString;

@interface AMSMetricsIdentifierKey : NSObject

@property BOOL crossDeviceSync;
@property (retain) NSString *name;
@property BOOL isActiveITunesAccountRequired;
@property BOOL provideU13Identifier;

+ (id)keyWithName:(id)a0 crossDeviceSync:(BOOL)a1;
+ (id)keyWithName:(id)a0 crossDeviceSync:(BOOL)a1 isActiveITunesAccountRequired:(BOOL)a2 provideU13Identifier:(BOOL)a3;
+ (id)keyWithName:(id)a0 crossDeviceSync:(BOOL)a1 isActiveITunesAccountRequired:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;

@end
