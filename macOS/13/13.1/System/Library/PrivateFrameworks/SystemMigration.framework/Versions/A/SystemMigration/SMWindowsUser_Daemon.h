@class NSMutableDictionary, NSDictionary, NSData, NSArray, NSNumber, NSString;

@interface SMWindowsUser_Daemon : SMUser_Daemon

@property (retain) NSNumber *cachedHomeDirSize;
@property (retain) NSData *randomPictureData;
@property (retain) NSMutableDictionary *componentDictionary;
@property (retain) NSDictionary *attributes;
@property (retain) NSArray *components;
@property (readonly, retain) NSString *windowsSID;
@property (readonly) BOOL canTransfer;
@property (readonly, retain) NSData *accountPictureData;

+ (id)keyPathsForValuesAffectingCanTransfer;
+ (id)keyPathsForValuesAffectingIsAdminUser;
+ (id)keyPathsForValuesAffectingWindowsSID;
+ (id)keyPathsForValuesAffectingHomeDirSize;
+ (id)keyPathsForValuesAffectingAccountPicture;
+ (id)keyPathsForValuesAffectingAccountPictureData;
+ (id)keyPathsForValuesAffectingWindowsHomeDirectoryPath;
+ (id)validAndUniqueMacShortnameFromShortname:(id)a0;
+ (id)randomImageData;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (Class)clientClass;
- (id)dictionaryRepresentation;
- (BOOL)isAdminUser;
- (id)componentForIdentifier:(id)a0;
- (id)accountPicture;
- (id)homeDirSize;
- (void)addComponentsToDictionary:(id)a0;
- (id)dictionaryRepresentationSanitized:(BOOL)a0;
- (id)sanitizedDictionaryRepresentation;
- (id)windowsHomeDirectoryPath;

@end
