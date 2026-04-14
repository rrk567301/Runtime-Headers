@class NSString, NSDictionary, NSArray, NSDate, NSURL;

@interface SHMediaItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *resultDictionary;
@property (readonly) NSDictionary *properties;
@property (readonly, copy) NSString *fuzzyRepresentation;
@property (readonly) NSDate *releaseDate;
@property (readonly) NSString *albumName;
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

+ (id)proxyConnection;
+ (id)mediaItemWithProperties:(id)a0;
+ (void)fetchMediaItemWithShazamID:(id)a0 completionHandler:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)objectForKeyedSubscript:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)validValueForKey:(id)a0 ofType:(Class)a1;

@end
