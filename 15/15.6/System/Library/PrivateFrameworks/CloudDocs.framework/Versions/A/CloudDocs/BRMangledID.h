@class NSString;

@interface BRMangledID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isShared;
@property (readonly, nonatomic) char isPrivate;
@property (readonly, nonatomic) char isCloudDocsMangledID;
@property (readonly, nonatomic) char isPassbookMangledID;
@property (readonly, nonatomic) char isCorporateMangledID;
@property (readonly, nonatomic) char isDesktopMangledID;
@property (readonly, nonatomic) char isDocumentsMangledID;
@property (readonly, nonatomic) NSString *appLibraryOrZoneName;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSString *mangledIDString;
@property (readonly, nonatomic) NSString *aliasTargetContainerString;

+ (char)validateMangledIDString:(id)a0 strict:(char)a1;
+ (id)_containerIDFromSharedContainerID:(id)a0 validate:(char)a1;
+ (id)_containerIDFromSharedMangledIDString:(id)a0 validate:(char)a1;
+ (id)_mangledIDStringFromZoneName:(id)a0 ownerName:(id)a1 validate:(char)a2;
+ (id)_ownerNameFromSharedMangledIDString:(id)a0 validate:(char)a1;
+ (id)_privateMangledContainerID:(id)a0 validate:(char)a1;
+ (id)_privateUnmangledContainerID:(id)a0 validate:(char)a1;
+ (id)_sharedMangledIDStringWithContainerID:(id)a0 ownerName:(id)a1 validate:(char)a2;
+ (id)cloudDocsMangledID;
+ (id)containerMetadataMangledID;
+ (id)desktopMangledID;
+ (id)documentsMangledID;
+ (id)sharedDatabaseMangledID;
+ (id)sideCarMangledID;
+ (char)validateContainerID:(id)a0;
+ (char)validateMangledIDString:(id)a0;
+ (char)validateOwnerName:(id)a0;
+ (id)zoneHealthMangledID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1;
- (id)initWithRecordZoneID:(id)a0;
- (id)initWithAliasTargetContainerString:(id)a0;
- (id)initWithAppLibraryName:(id)a0;
- (id)initWithMangledString:(id)a0;
- (char)isEqualToMangledID:(id)a0;

@end
