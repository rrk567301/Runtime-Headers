@class NSUUID, NSURL;

@interface UARPDeviceAsset : NSObject

@property (readonly) NSUUID *uuid;
@property (readonly) BOOL isObservedOnly;
@property (readonly) NSURL *url;

- (id)initWithUUID:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)getIsObservedOnly;

@end
