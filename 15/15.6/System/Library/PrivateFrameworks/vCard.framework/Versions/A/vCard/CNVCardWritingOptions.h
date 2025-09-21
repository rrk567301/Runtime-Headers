@class NSArray;

@interface CNVCardWritingOptions : NSObject

@property char includePrivateFields;
@property char includePrivateBundleIdentifiers;
@property char includeNotes;
@property char includeUserSettings;
@property char includePhotos;
@property char includeWallpaper;
@property char includeMeCardOnlySharingProperties;
@property char includePronouns;
@property char useUnencryptedPronouns;
@property char compressPhotos;
@property char prefersUncroppedPhotos;
@property char usePhotoReferencesIfAvailable;
@property char shouldSuppressRegulatoryLogging;
@property struct CGSize { double width; double height; } maximumImageSize;
@property unsigned long long maximumEncodingLength;
@property unsigned long long maximumImageEncodingLength;
@property (copy) NSArray *treatAsUnknownProperties;
@property unsigned long long outputVersion;
@property (copy) NSArray *availableEncodings;

+ (id)optionsFromPreferences;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
