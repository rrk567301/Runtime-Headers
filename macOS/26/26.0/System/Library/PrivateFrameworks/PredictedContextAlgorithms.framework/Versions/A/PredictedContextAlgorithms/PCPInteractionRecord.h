@class PCPApplyState, PCPPredictRequest, PCPLifecycleEvent, PCPRetrieveState, PCPComputeInterruptRequest, PCPComputeRequest;

@interface PCPInteractionRecord : PBCodable <NSCopying> {
    struct { unsigned char interactionCommand : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLifecycleEvent;
@property (retain, nonatomic) PCPLifecycleEvent *lifecycleEvent;
@property (readonly, nonatomic) BOOL hasApplyStateEvent;
@property (retain, nonatomic) PCPApplyState *applyStateEvent;
@property (readonly, nonatomic) BOOL hasRetrieveStateEvent;
@property (retain, nonatomic) PCPRetrieveState *retrieveStateEvent;
@property (readonly, nonatomic) BOOL hasComputeEvent;
@property (retain, nonatomic) PCPComputeRequest *computeEvent;
@property (readonly, nonatomic) BOOL hasPredictEvent;
@property (retain, nonatomic) PCPPredictRequest *predictEvent;
@property (readonly, nonatomic) BOOL hasInterruptRequest;
@property (retain, nonatomic) PCPComputeInterruptRequest *interruptRequest;
@property (nonatomic) BOOL hasInteractionCommand;
@property (nonatomic) int interactionCommand;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsInteractionCommand:(id)a0;
- (void)clearOneofValuesForInteractionCommand;
- (id)interactionCommandAsString:(int)a0;

@end
