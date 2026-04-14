@class NSString, NSData;

@interface DADeviceRegistry : NSObject <CUXPCCodable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *manufacturerID;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSString *friendlyName;
@property (readonly, copy, nonatomic) NSData *image2xData;
@property (readonly, copy, nonatomic) NSData *image3xData;
@property (readonly, copy, nonatomic) NSData *videoData;
@property (readonly, copy, nonatomic) NSString *companionAppBundleID;
@property (readonly, nonatomic) BOOL companionAppIsOptional;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithManufacturerID:(id)a0 modelID:(id)a1;
- (id)initWithManufacturerID:(id)a0 modelID:(id)a1 friendlyName:(id)a2 image2xData:(id)a3 image3xData:(id)a4 videoData:(id)a5 companionAppBundleID:(id)a6 companionAppIsOptional:(BOOL)a7;
- (id)initWithManufacturerID:(id)a0 modelID:(id)a1 info:(id)a2;

@end
