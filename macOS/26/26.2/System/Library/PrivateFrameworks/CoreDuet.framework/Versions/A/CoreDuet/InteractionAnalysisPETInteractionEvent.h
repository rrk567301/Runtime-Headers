@class NSString;

@interface InteractionAnalysisPETInteractionEvent : PBCodable <NSCopying> {
    double _timestamp;
    NSString *_associatedMemberIDs;
    NSString *_bundleID;
    NSString *_direction;
    NSString *_eventMechanism;
    NSString *_interactionID;
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
