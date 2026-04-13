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

+ (id)validAndUniqueMacShortnameFromShortname:(id)a0;
+ (id)randomImageData;
+ (id)keyPathsForValuesAffectingCanTransfer;
+ (id)keyPathsForValuesAffectingIsAdminUser;
+ (id)keyPathsForValuesAffectingWindowsSID;
+ (id)keyPathsForValuesAffectingHomeDirSize;
+ (id)keyPathsForValuesAffectingAccountPicture;
+ (id)keyPathsForValuesAffectingAccountPictureData;
+ (id)keyPathsForValuesAffectingWindowsHomeDirectoryPath;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (Class)clientClass;
- (id)dictionaryRepresentation;
- (id)componentForIdentifier:(id)a0;
- (BOOL)isAdminUser;
- (id)accountPicture;
- (id)homeDirSize;
- (id)windowsHomeDirectoryPath;
- (void)addComponentsToDictionary:(id)a0;
- (id)dictionaryRepresentationSanitized:(BOOL)a0;
- (id)sanitizedDictionaryRepresentation;

@end
