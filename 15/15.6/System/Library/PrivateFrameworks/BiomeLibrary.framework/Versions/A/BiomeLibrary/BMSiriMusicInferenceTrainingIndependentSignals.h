@class NSString;

@interface BMSiriMusicInferenceTrainingIndependentSignals : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int clientDayOfWeek;
@property (nonatomic) char hasClientDayOfWeek;
@property (readonly, nonatomic) int rawClientHourOfDay;
@property (nonatomic) char hasRawClientHourOfDay;
@property (readonly, nonatomic) char isMediaAlbumPresent;
@property (nonatomic) char hasIsMediaAlbumPresent;
@property (readonly, nonatomic) char isMediaArtistPresent;
@property (nonatomic) char hasIsMediaArtistPresent;
@property (readonly, nonatomic) char isMediaGenrePresent;
@property (nonatomic) char hasIsMediaGenrePresent;
@property (readonly, nonatomic) char isMediaMoodPresent;
@property (nonatomic) char hasIsMediaMoodPresent;
@property (readonly, nonatomic) char isMediaNamePresent;
@property (nonatomic) char hasIsMediaNamePresent;
@property (readonly, nonatomic) char isMediaReleaseDatePresent;
@property (nonatomic) char hasIsMediaReleaseDatePresent;
@property (readonly, nonatomic) int nowPlayingLastBundleRecencyS;
@property (nonatomic) char hasNowPlayingLastBundleRecencyS;
@property (readonly, nonatomic) long long rawLanguage;
@property (nonatomic) char hasRawLanguage;
@property (readonly, nonatomic) long long rawLocale;
@property (nonatomic) char hasRawLocale;
@property (readonly, nonatomic) long long rawRegion;
@property (nonatomic) char hasRawRegion;
@property (readonly, nonatomic) char isClientDaylight;
@property (nonatomic) char hasIsClientDaylight;
@property (readonly, nonatomic) char isClientNavigating;
@property (nonatomic) char hasIsClientNavigating;
@property (readonly, nonatomic) char isClientWorkout;
@property (nonatomic) char hasIsClientWorkout;
@property (readonly, nonatomic) int mediaType;
@property (nonatomic) char hasMediaType;
@property (readonly, nonatomic) int nowPlayingState;
@property (nonatomic) char hasNowPlayingState;
@property (readonly, nonatomic) char isPireneRequest;
@property (nonatomic) char hasIsPireneRequest;
@property (readonly, nonatomic) double foregroundBundleRecencyS;
@property (nonatomic) char hasForegroundBundleRecencyS;
@property (readonly, nonatomic) int mediaParsecCategory;
@property (nonatomic) char hasMediaParsecCategory;
@property (readonly, nonatomic) int sirikitResponseCode;
@property (nonatomic) char hasSirikitResponseCode;
@property (readonly, nonatomic) int appSelectionUses;
@property (nonatomic) char hasAppSelectionUses;
@property (readonly, nonatomic) unsigned int modelVersion;
@property (nonatomic) char hasModelVersion;
@property (readonly, nonatomic) int resolutionType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithClientDayOfWeek:(id)a0 rawClientHourOfDay:(id)a1 isMediaAlbumPresent:(id)a2 isMediaArtistPresent:(id)a3 isMediaGenrePresent:(id)a4 isMediaMoodPresent:(id)a5 isMediaNamePresent:(id)a6 isMediaReleaseDatePresent:(id)a7 nowPlayingLastBundleRecencyS:(id)a8 rawLanguage:(id)a9 rawLocale:(id)a10 rawRegion:(id)a11 isClientDaylight:(id)a12 isClientNavigating:(id)a13 isClientWorkout:(id)a14 mediaType:(id)a15 nowPlayingState:(id)a16 isPireneRequest:(id)a17 foregroundBundleRecencyS:(id)a18 mediaParsecCategory:(id)a19 sirikitResponseCode:(id)a20 appSelectionUses:(id)a21 modelVersion:(id)a22 resolutionType:(int)a23;

@end
