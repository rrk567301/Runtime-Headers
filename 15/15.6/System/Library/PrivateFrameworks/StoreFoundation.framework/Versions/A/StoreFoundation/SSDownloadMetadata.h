@class NSData, NSString, NSArray, NSURL, NSLock, NSMutableDictionary, NSDictionary, NSNumber;

@interface SSDownloadMetadata : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSDictionary *dictionary;
@property (retain) NSString *downloadKey;
@property (retain) NSData *epubRightsData;
@property (retain) NSString *appleID;
@property (retain) NSString *fileExtension;
@property (retain) NSArray *sinfs;
@property (readonly) char extractionCanBeStreamed;
@property (readonly) NSNumber *uncompressedSize;
@property (readonly) NSString *bundleDisplayName;
@property (readonly) NSString *bundleShortVersionString;
@property (retain) NSString *ipaInstallPath;
@property (retain) NSData *ipaInstallBookmarkData;
@property (retain) NSString *genre;
@property unsigned long long itemIdentifier;
@property (retain) NSString *kind;
@property (retain) NSString *subtitle;
@property (retain) NSString *title;
@property (retain) NSURL *thumbnailImageURL;
@property (retain) NSString *transactionIdentifier;
@property char animationExpected;
@property (retain) NSString *productType;
@property (readonly) NSString *sortArtist;
@property (readonly) NSString *sortName;
@property (readonly) NSNumber *ageRestriction;
@property (retain) NSURL *preflightPackageURL;
@property (retain) NSString *buyParameters;
@property (readonly) NSString *purchaseDate;
@property (readonly) char isExplicitContents;
@property (retain) NSString *iapInstallPath;
@property (readonly) NSNumber *iapContentSize;
@property (readonly) NSString *iapContentVersion;
@property (readonly) NSNumber *collectionID;
@property (retain) NSString *collectionName;
@property (retain) NSNumber *durationInMilliseconds;
@property (getter=isRental) char rental;
@property (readonly, getter=isSample) char sample;
@property (readonly) NSString *applicationIdentifier;
@property char artworkIsPrerendered;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *bundleVersion;
@property (retain) NSNumber *version;
@property (readonly) char needsSoftwareInstallOperation;
@property char isMDMProvided;
@property (retain) NSString *managedAppUUIDString;
@property (readonly) NSArray *assets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithKind:(id)a0;
- (id)localServerInfo;
- (id)_valueForFirstAvailableKey:(id)a0;
- (id)deltaPackages;
- (void)setExtractionCanBeStreamed:(char)a0;
- (void)setUncompressedSize:(id)a0;
- (void)setValue:(id)a0 forMetadataKey:(id)a1;

@end
