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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsInteractionCommand:(id)a0;
- (void)clearOneofValuesForInteractionCommand;
- (id)interactionCommandAsString:(int)a0;

@end
