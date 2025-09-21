@class NSString;

@interface TPSCloudDeviceInfo : TPSSerializableObject

@property (nonatomic, getter=isPreferred) BOOL preferred;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *minOSVersion;
@property (copy, nonatomic) NSString *maxOSVersion;
@property (copy, nonatomic) NSString *symbolIdentifier;

- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
