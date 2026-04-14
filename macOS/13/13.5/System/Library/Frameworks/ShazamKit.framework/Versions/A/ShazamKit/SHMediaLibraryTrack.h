@class NSDate, NSString, NSURL, SHShazamKey, NSSet, NSMutableSet, CLLocation, SHMediaLibraryItemMetadata;

@interface SHMediaLibraryTrack : NSObject <SHMediaLibraryItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableSet *labelSet;
@property (retain) NSDate *creationDate;
@property (retain) NSURL *artworkURL;
@property (retain) NSURL *shazamURL;
@property (retain) SHShazamKey *shazamKey;
@property (retain) CLLocation *location;
@property (copy) NSString *providerName;
@property (copy) NSString *providerIdentifier;
@property (copy) NSString *recognitionIdentifier;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (copy) NSString *associatedGroupIdentifier;
@property (readonly) BOOL shouldUpdate;
@property (readonly) NSSet *labels;
@property (readonly, copy) NSString *identifier;
@property (readonly) SHMediaLibraryItemMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)libraryTrackFromMediaItem:(id)a0;
+ (void)updateLibraryTrack:(id)a0 withMediaItem:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addLabel:(id)a0;
- (id)_initWithIdentifier:(id)a0 metadata:(id)a1 labels:(id)a2;
- (void)addPlatformLabel;
- (id)initWithIdentifier:(id)a0 builder:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 builder:(id /* block */)a2;
- (BOOL)isEqualTrack:(id)a0;
- (id)platformLabel;
- (void)updateWithBuilderBlock:(id /* block */)a0;

@end
