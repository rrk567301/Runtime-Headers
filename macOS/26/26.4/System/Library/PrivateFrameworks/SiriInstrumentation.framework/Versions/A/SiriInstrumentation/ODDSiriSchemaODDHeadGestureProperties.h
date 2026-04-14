@class NSData;

@interface ODDSiriSchemaODDHeadGestureProperties : SISchemaInstrumentationMessage {
    struct { unsigned char headGesturesSupported : 1; unsigned char headGesturesEnabled : 1; unsigned char acceptProceedGesture : 1; unsigned char declineDismissGesture : 1; } _has;
}

@property (nonatomic) BOOL headGesturesSupported;
@property (nonatomic) BOOL hasHeadGesturesSupported;
@property (nonatomic) BOOL headGesturesEnabled;
@property (nonatomic) BOOL hasHeadGesturesEnabled;
@property (nonatomic) int acceptProceedGesture;
@property (nonatomic) BOOL hasAcceptProceedGesture;
@property (nonatomic) int declineDismissGesture;
@property (nonatomic) BOOL hasDeclineDismissGesture;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAcceptProceedGesture;
- (void)deleteDeclineDismissGesture;
- (void)deleteHeadGesturesEnabled;
- (void)deleteHeadGesturesSupported;

@end
