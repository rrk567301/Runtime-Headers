@class NSString, NSArray, NSDictionary, NSDate;

@interface WBSCloudTabDeviceParameters : NSObject

@property (nonatomic) char closeRequestSupported;
@property (nonatomic) char cloudKitBookmarkSyncingSupported;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceTypeIdentifier;
@property (nonatomic) char hasDuplicateName;
@property (nonatomic, getter=isEphemeralDevice) char ephemeralDevice;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSArray *tabs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)parametersWithDevice:(id)a0;
+ (id)parametersWithDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
