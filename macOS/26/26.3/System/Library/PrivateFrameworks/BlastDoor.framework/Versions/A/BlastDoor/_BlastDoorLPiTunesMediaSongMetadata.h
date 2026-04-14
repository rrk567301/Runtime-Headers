@class NSString, NSArray, _BlastDoorLPImage, NSURL, _BlastDoorLPArtworkMetadata, _BlastDoorLPLyricExcerptMetadata;

@interface _BlastDoorLPiTunesMediaSongMetadata : _BlastDoorLPSpecializationMetadata <_BlastDoorLPSongMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *lyrics;
@property (retain, nonatomic) _BlastDoorLPImage *artwork;
@property (copy, nonatomic) _BlastDoorLPArtworkMetadata *artworkMetadata;
@property (copy, nonatomic) NSURL *previewURL;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) _BlastDoorLPLyricExcerptMetadata *lyricExcerpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end
