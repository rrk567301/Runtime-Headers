@class NSArray, BLHLSPlaylistState, NSMutableSet, NSUUID, NSSet, NSString;

@interface BLHLSPlaylist : NSObject <BLM3U8ParserDelegate>

@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *streamInfs;
@property (retain, nonatomic) NSArray *segments;
@property (nonatomic) char independentSegments;
@property (nonatomic) char ignoreSegments;
@property (retain, nonatomic) BLHLSPlaylistState *state;
@property (retain, nonatomic) NSMutableSet *uniqueKeys;
@property (retain, nonatomic) NSArray *requestedBitrates;
@property (retain, nonatomic) NSUUID *racGUID;
@property (readonly, nonatomic) NSSet *keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_playlistUsingParser:(id)a0 ignoreSegments:(char)a1 error:(id *)a2;
+ (char)_rewritePlaylistWithParser:(id)a0 toURL:(id)a1 requestedBitrates:(id)a2 error:(id *)a3;
+ (id)playlistParsingData:(id)a0 error:(id *)a1;
+ (id)playlistParsingURL:(id)a0 error:(id *)a1;
+ (id)playlistParsingURL:(id)a0 ignoreSegments:(char)a1 error:(id *)a2;
+ (char)rewritePlaylistData:(id)a0 toURL:(id)a1 requestedBitrates:(id)a2 error:(id *)a3;
+ (char)rewritePlaylistURL:(id)a0 toURL:(id)a1 requestedBitrates:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)parser:(id)a0 lineIsComment:(id)a1;
- (void)parser:(id)a0 lineIsTag:(id)a1 value:(id)a2 attributeList:(id)a3;
- (void)parser:(id)a0 lineIsURL:(id)a1;
- (char)parserShouldCollectLine:(id)a0;
- (char)_parseUsingParser:(id)a0 error:(id *)a1;
- (id)initWithRequestedBitrates:(id)a0;

@end
