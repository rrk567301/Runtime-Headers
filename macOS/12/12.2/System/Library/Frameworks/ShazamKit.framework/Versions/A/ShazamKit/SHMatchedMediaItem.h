@class NSString, SHSyncedLyrics, NSDate;

@interface SHMatchedMediaItem : SHMediaItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long matchScore;
@property (readonly) float speedSkew;
@property (readonly) SHSyncedLyrics *syncedLyrics;
@property (readonly) NSDate *audioStartDate;
@property (readonly, copy) NSString *syncedLyricsSnippet;
@property (readonly) float frequencySkew;
@property (readonly) double matchOffset;
@property (readonly) double predictedCurrentMatchOffset;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)offset;
- (id)initWithProperties:(id)a0;
- (id)initWithMatchedMediaItemDictionary:(id)a0 syncedLyrics:(id)a1;
- (id)initWithMatchedMediaItemDictionary:(id)a0;

@end
