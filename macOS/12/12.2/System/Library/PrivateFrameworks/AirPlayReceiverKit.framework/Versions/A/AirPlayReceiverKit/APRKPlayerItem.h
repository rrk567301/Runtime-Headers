@class NSString, NSArray, NSURL, NSDate;

@interface APRKPlayerItem : AVPlayerItem {
    NSURL *_contentLocation;
    NSArray *_outOfBandAlternateTracks;
}

@property (copy, nonatomic) NSString *UUIDString;
@property (nonatomic) long long actionAtItemEnd;
@property (nonatomic) BOOL isAudioOnly;
@property (readonly, nonatomic) BOOL expectsSecureStop;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startPosition;

+ (id)UUIDFromItemDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)selectedMediaArray;
- (id)initWithDictionary:(id)a0 resourceLoaderHelper:(id)a1 contentKeyHelper:(id)a2 options:(id)a3;
- (void)setEnabledState:(BOOL)a0 forTrackWithID:(int)a1;
- (void)setTextStyleRulesUsingArray:(id)a0;
- (id)playbackErrorLog;
- (id)playbackAccessLog;
- (BOOL)enabledStateForTrackWithID:(int)a0;
- (id)outOfBandAlternateTracks;
- (id)UUIDOnlyDictionaryRepresentation;

@end
