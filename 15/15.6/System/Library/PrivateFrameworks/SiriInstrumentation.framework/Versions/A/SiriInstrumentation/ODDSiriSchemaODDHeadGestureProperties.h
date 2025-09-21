@class NSData;

@interface ODDSiriSchemaODDHeadGestureProperties : SISchemaInstrumentationMessage {
    struct { unsigned char headGesturesSupported : 1; unsigned char headGesturesEnabled : 1; unsigned char acceptProceedGesture : 1; unsigned char declineDismissGesture : 1; } _has;
}

@property (nonatomic) char headGesturesSupported;
@property (nonatomic) char hasHeadGesturesSupported;
@property (nonatomic) char headGesturesEnabled;
@property (nonatomic) char hasHeadGesturesEnabled;
@property (nonatomic) int acceptProceedGesture;
@property (nonatomic) char hasAcceptProceedGesture;
@property (nonatomic) int declineDismissGesture;
@property (nonatomic) char hasDeclineDismissGesture;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAcceptProceedGesture;
- (void)deleteDeclineDismissGesture;
- (void)deleteHeadGesturesEnabled;
- (void)deleteHeadGesturesSupported;
- (id)suppressMessageUnderConditions;

@end
