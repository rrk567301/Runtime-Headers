@class NSString, NSMutableArray;

@interface InteractionAnalysisPETInteractionEvents : PBCodable <NSCopying> {
    NSString *_deviceID;
    NSMutableArray *_interactionEvents;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
