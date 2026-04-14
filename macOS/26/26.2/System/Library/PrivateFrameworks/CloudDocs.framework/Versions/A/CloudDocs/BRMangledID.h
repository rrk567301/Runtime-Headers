@class NSString;

@interface BRMangledID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isCloudDocsMangledID;
@property (readonly, nonatomic) BOOL isPassbookMangledID;
@property (readonly, nonatomic) BOOL isCorporateMangledID;
@property (readonly, nonatomic) BOOL isReservedMangedID;
@property (readonly, nonatomic) BOOL isDesktopMangledID;
@property (readonly, nonatomic) BOOL isDocumentsMangledID;
@property (readonly, nonatomic) NSString *appLibraryOrZoneName;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSString *mangledIDString;
@property (readonly, nonatomic) NSString *aliasTargetContainerString;

+ (id)sharedDatabaseMangledID;
+ (BOOL)validateMangledIDString:(id)a0;
+ (BOOL)validateMangledIDString:(id)a0 strict:(BOOL)a1;
+ (id)_containerIDFromSharedContainerID:(id)a0 validate:(BOOL)a1;
+ (id)zoneHealthMangledID;
+ (id)_containerIDFromSharedMangledIDString:(id)a0 validate:(BOOL)a1;
+ (BOOL)validateContainerID:(id)a0;
+ (id)cloudDocsMangledID;
+ (BOOL)validateOwnerName:(id)a0;
+ (id)_sharedMangledIDStringWithContainerID:(id)a0 ownerName:(id)a1 validate:(BOOL)a2;
+ (id)_ownerNameFromSharedMangledIDString:(id)a0 validate:(BOOL)a1;
+ (id)_mangledIDStringFromZoneName:(id)a0 ownerName:(id)a1 validate:(BOOL)a2;
+ (id)desktopMangledID;
+ (id)_privateMangledContainerID:(id)a0 validate:(BOOL)a1;
+ (id)documentsMangledID;
+ (id)sideCarMangledID;
+ (id)_privateUnmangledContainerID:(id)a0 validate:(BOOL)a1;
+ (id)containerMetadataMangledID;

- (id)initWithCoder:(id)a0;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMangledString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAliasTargetContainerString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAppLibraryName:(id)a0;
- (id)initWithRecordZoneID:(id)a0;
- (BOOL)isEqualToMangledID:(id)a0;

@end
