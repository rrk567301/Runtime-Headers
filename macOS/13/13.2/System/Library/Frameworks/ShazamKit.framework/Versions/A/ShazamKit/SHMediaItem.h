@class NSString, NSDictionary, NSArray, NSDate, NSURL;

@interface SHMediaItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *properties;
@property (readonly, copy) NSString *fuzzyRepresentation;
@property (readonly) NSDate *releaseDate;
@property (readonly, copy) NSString *albumName;
@property (readonly, copy) NSArray *staticLyricLines;
@property (readonly, copy) NSString *lyricsSnippet;
@property (retain) NSDictionary *_rawResponseSongs;
@property (readonly, copy) NSString *shazamID;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *subtitle;
@property (readonly, copy) NSString *artist;
@property (readonly) NSArray *genres;
@property (readonly, copy) NSString *appleMusicID;
@property (readonly) NSURL *appleMusicURL;
@property (readonly) NSURL *webURL;
@property (readonly) NSURL *artworkURL;
@property (readonly) NSURL *videoURL;
@property (readonly) BOOL explicitContent;
@property (readonly, copy) NSString *isrc;
@property (readonly) NSArray *timeRanges;
@property (readonly) NSArray *frequencySkewRanges;

+ (id)serverConnection;
+ (id)mediaItemWithProperties:(id)a0;
+ (id)mediaItemWithDictionary:(id)a0;
+ (void)fetchMediaItemWithShazamID:(id)a0 completionHandler:(id /* block */)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (id)valueForProperty:(id)a0;
- (id)validValueForProperty:(id)a0;
- (BOOL)describesFrequencySkew:(double)a0;
- (BOOL)describesOffset:(double)a0;

@end
