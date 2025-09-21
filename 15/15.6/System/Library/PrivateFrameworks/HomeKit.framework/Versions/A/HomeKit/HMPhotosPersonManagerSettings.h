@class NSString, NSArray;

@interface HMPhotosPersonManagerSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (getter=isImportingFromPhotoLibraryEnabled) char importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) char sharingFaceClassificationsEnabled;
@property (readonly, getter=isEnabled) char enabled;
@property (readonly, getter=isSharingFaceClassificationsAllowed) char sharingFaceClassificationsAllowed;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
