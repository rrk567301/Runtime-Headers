@class NSUUID, NSURL;

@interface UARPDeviceAsset : NSObject

@property (readonly) NSUUID *uuid;
@property (readonly) NSURL *url;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
