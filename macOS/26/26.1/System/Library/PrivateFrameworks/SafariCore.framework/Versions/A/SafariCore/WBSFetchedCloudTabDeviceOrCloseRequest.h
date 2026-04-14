@class NSString, NSDictionary;

@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, copy, nonatomic) NSDictionary *deviceOrCloseRequestDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)initWithUUIDString:(id)a0 deviceOrCloseRequestDictionary:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
