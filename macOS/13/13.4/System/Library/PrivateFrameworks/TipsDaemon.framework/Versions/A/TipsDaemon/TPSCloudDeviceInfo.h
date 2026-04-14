@class NSString;

@interface TPSCloudDeviceInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *minOSVersion;
@property (copy, nonatomic) NSString *maxOSVersion;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithModel:(id)a0;

@end
