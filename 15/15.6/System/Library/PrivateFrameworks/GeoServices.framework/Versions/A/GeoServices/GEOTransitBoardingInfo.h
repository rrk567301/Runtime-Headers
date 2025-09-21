@class PBDataReader, NSString, GEOTransitExitPlanInfo, GEOTransitListTimeInstruction, NSMutableArray, PBUnknownFields;

@interface GEOTransitBoardingInfo : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTransitListTimeInstruction *_endTimeInstruction;
    NSMutableArray *_entrys;
    GEOTransitExitPlanInfo *_exitPlanInfo;
    GEOTransitListTimeInstruction *_preBoardingTimeInstruction;
    GEOTransitListTimeInstruction *_summaryTimeInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_endTimeInstruction : 1; unsigned char read_entrys : 1; unsigned char read_exitPlanInfo : 1; unsigned char read_preBoardingTimeInstruction : 1; unsigned char read_summaryTimeInstruction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *entrys;
@property (readonly, nonatomic) char hasExitPlanInfo;
@property (retain, nonatomic) GEOTransitExitPlanInfo *exitPlanInfo;
@property (readonly, nonatomic) char hasSummaryTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *summaryTimeInstruction;
@property (readonly, nonatomic) char hasEndTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *endTimeInstruction;
@property (readonly, nonatomic) char hasPreBoardingTimeInstruction;
@property (retain, nonatomic) GEOTransitListTimeInstruction *preBoardingTimeInstruction;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)entryType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addEntry:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (char)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)a0;
- (void)clearEntrys;
- (void)clearUnknownFields:(char)a0;
- (id)entryAtIndex:(unsigned long long)a0;
- (unsigned long long)entrysCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
