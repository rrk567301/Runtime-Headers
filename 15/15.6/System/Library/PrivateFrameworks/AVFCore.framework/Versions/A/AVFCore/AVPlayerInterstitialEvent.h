@class NSString, AVPlayerItem, NSArray, NSDate, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerInterstitialEvent : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    AVPlayerItem *_primaryItem;
    struct OpaqueFigPlayerInterstitialEvent { } *_figEvent;
    NSArray *_templateItems;
}

@property (readonly, weak, nonatomic) AVPlayerItem *primaryItem;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSArray *templateItems;
@property (readonly, nonatomic) unsigned long long restrictions;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } resumptionOffset;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } playoutLimit;
@property (readonly, nonatomic) char alignsStartWithPrimarySegmentBoundary;
@property (readonly, nonatomic) char alignsResumptionWithPrimarySegmentBoundary;
@property (readonly, nonatomic) NSString *cue;
@property (readonly, nonatomic) char willPlayOnce;
@property (readonly, nonatomic) NSDictionary *userDefinedAttributes;
@property (readonly) NSDictionary *assetListResponse;
@property (readonly, nonatomic) long long timelineOccupancy;
@property (readonly, nonatomic) char supplementsPrimaryContent;
@property (readonly, nonatomic) char contentMayVary;

+ (id)interstitialEventWithPrimaryItem:(id)a0 date:(id)a1;
+ (id)interstitialEventWithPrimaryItem:(id)a0 identifier:(id)a1 date:(id)a2 templateItems:(id)a3 restrictions:(unsigned long long)a4 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 userDefinedAttributes:(id)a7;
+ (id)interstitialEventWithPrimaryItem:(id)a0 identifier:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 templateItems:(id)a3 restrictions:(unsigned long long)a4 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 userDefinedAttributes:(id)a7;
+ (id)interstitialEventWithPrimaryItem:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)newItemArrayWithCopiedItems:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;
- (void)setTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setDate:(id)a0;
- (void)setTemplateItems:(id)a0;
- (char)validate:(int *)a0;
- (void)setRestrictions:(unsigned long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })plannedDuration;
- (void)setPrimaryItem:(id)a0;
- (void)checkMutability;
- (void)setCue:(id)a0;
- (id)_internalTemplateItems;
- (char)_participatesInCoordinatedPlayback;
- (void)_updateStartOffset;
- (id)assetURLsReturningError:(id *)a0;
- (struct OpaqueFigPlayerInterstitialEvent { } *)figEvent;
- (id)initWithPrimaryItem:(id)a0 identifier:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 date:(id)a3 templateItems:(id)a4 restrictions:(unsigned long long)a5 resumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 playoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 userDefinedAttributes:(id)a8;
- (id)initWithPrimaryItem:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 date:(id)a2;
- (id)initWithPrimaryItemAndFigEvent:(id)a0 templateItems:(id)a1 figEvent:(struct OpaqueFigPlayerInterstitialEvent { } *)a2;
- (void)setAlignsResumptionWithPrimarySegmentBoundary:(char)a0;
- (void)setAlignsStartWithPrimarySegmentBoundary:(char)a0;
- (void)setContentMayVary:(char)a0;
- (void)setImmutable;
- (void)setPlannedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setPlayoutLimit:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setResumptionOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setSupplementsPrimaryContent:(char)a0;
- (void)setTimelineOccupancy:(long long)a0;
- (void)setUserDefinedAttributes:(id)a0;
- (void)setWillPlayOnce:(char)a0;

@end
