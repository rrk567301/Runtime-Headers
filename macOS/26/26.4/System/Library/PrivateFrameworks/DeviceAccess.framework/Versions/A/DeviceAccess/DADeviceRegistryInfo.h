@class NSString, NSData;

@interface DADeviceRegistryInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSData *image2xData;
@property (copy, nonatomic) NSData *image3xData;
@property (copy, nonatomic) NSData *videoData;
@property (copy, nonatomic) NSString *companionAppBundleID;
@property (nonatomic) BOOL companionAppIsOptional;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
