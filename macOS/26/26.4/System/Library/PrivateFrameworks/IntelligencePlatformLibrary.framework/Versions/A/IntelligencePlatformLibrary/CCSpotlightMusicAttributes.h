@class NSString, NSDate;

@interface CCSpotlightMusicAttributes : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    BOOL _hasRaw_recordingDate;
    double _raw_recordingDate;
}

@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) unsigned int audioChannelCount;
@property (nonatomic) BOOL hasAudioChannelCount;
@property (readonly, nonatomic) NSString *audioEncodingApplication;
@property (readonly, nonatomic) double audioSampleRate;
@property (nonatomic) BOOL hasAudioSampleRate;
@property (readonly, nonatomic) unsigned int audioTrackNumber;
@property (nonatomic) BOOL hasAudioTrackNumber;
@property (readonly, nonatomic) NSString *composer;
@property (readonly, nonatomic) NSString *keySignature;
@property (readonly, nonatomic) NSString *lyricist;
@property (readonly, nonatomic) NSString *musicalGenre;
@property (readonly, nonatomic) NSDate *recordingDate;
@property (readonly, nonatomic) double tempo;
@property (nonatomic) BOOL hasTempo;
@property (readonly, nonatomic) NSString *timeSignature;
@property (readonly, nonatomic) BOOL generalMIDISequence;
@property (nonatomic) BOOL hasGeneralMIDISequence;
@property (readonly, nonatomic) NSString *musicalInstrumentCategory;
@property (readonly, nonatomic) NSString *musicalInstrumentName;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)recordingDate;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithAlbum:(id)a0 artist:(id)a1 audioChannelCount:(id)a2 audioEncodingApplication:(id)a3 audioSampleRate:(id)a4 audioTrackNumber:(id)a5 composer:(id)a6 keySignature:(id)a7 lyricist:(id)a8 musicalGenre:(id)a9 recordingDate:(id)a10 tempo:(id)a11 timeSignature:(id)a12 generalMIDISequence:(id)a13 musicalInstrumentCategory:(id)a14 musicalInstrumentName:(id)a15 error:(id *)a16;

@end
