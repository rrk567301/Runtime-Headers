@class NSString;

@interface CCSerializedSetDevice : CCItemMessage

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasOptions;
@property (readonly, nonatomic) unsigned int options;

- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
