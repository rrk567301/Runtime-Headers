@class NSString, NSDictionary, ICRemoteCameraDevice;

@interface ICRemoteCameraDeviceProxy : NSObject

@property (copy, nonatomic) NSString *uuidString;
@property (copy, nonatomic) NSString *primaryIdentifierString;
@property (copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSDictionary *deviceContext;
@property (retain, nonatomic) ICRemoteCameraDevice *camera;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPrimaryIdentifierString:(id)a0 uuidString:(id)a1 localizedName:(id)a2;

@end
