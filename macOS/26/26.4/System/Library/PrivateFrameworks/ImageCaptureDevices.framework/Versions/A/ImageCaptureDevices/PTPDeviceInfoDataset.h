@class NSMutableData, NSArray, NSString;

@interface PTPDeviceInfoDataset : NSObject {
    NSMutableData *_content;
    unsigned short _standardVersion;
    unsigned int _vendorExtensionID;
    unsigned short _vendorExtensionVersion;
    NSString *_vendorExtensionDescription;
    unsigned short _functionalMode;
    NSArray *_operationsSupported;
    NSArray *_eventsSupported;
    NSArray *_devicePropertiesSupported;
    NSArray *_captureFormats;
    NSArray *_imageFormats;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_deviceVersion;
    NSString *_serialNumber;
}

@property (retain, nonatomic) NSMutableData *content;
@property (nonatomic) BOOL dirty;
@property (nonatomic) BOOL readOnlyObject;
@property (retain, nonatomic) NSArray *operationsSupported;
@property (retain, nonatomic) NSArray *eventsSupported;
@property (retain, nonatomic) NSArray *devicePropertiesSupported;
@property (retain, nonatomic) NSArray *captureFormats;
@property (retain, nonatomic) NSArray *imageFormats;
@property (copy, nonatomic) NSString *vendorExtensionDescription;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *deviceVersion;
@property (copy, nonatomic) NSString *serialNumber;

- (void)updateContent;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithMutableData:(id)a0;
- (unsigned short)standardVersion;
- (id)canonicalManufacturer;
- (unsigned short)functionalMode;
- (void)setFunctionalMode:(unsigned short)a0;
- (void)setStandardVersion:(unsigned short)a0;
- (void)setVendorExtensionID:(unsigned int)a0;
- (void)setVendorExtensionVersion:(unsigned short)a0;
- (unsigned int)vendorExtensionID;
- (unsigned short)vendorExtensionVersion;

@end
