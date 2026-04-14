@class NSArray, NSString, SHMediaLibraryItemMetadata, NSMutableArray;

@interface SHMediaLibraryGroup : NSObject <SHMediaLibraryItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableArray *mutableTracksToSave;
@property (readonly) NSArray *tracksToSave;
@property (readonly, copy) NSString *identifier;
@property (readonly) SHMediaLibraryItemMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)addTracks:(id)a0;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1;
- (id)_initWithIdentifier:(id)a0 metadata:(id)a1 tracksToSave:(id)a2;
- (void)removeTracks:(id)a0;
- (BOOL)isEqualGroup:(id)a0;
- (BOOL)validIdentifier:(id)a0;

@end
