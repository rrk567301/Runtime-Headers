@class NSString, NSArray;

@interface HMImmutableSetting : NSObject <HMMessageEncoding, HMFObject>

@property (readonly, copy) NSString *keyPath;
@property (readonly, getter=isReadOnly) char readOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;
- (id)initWithKeyPath:(id)a0 readOnly:(char)a1;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)a0;

@end
