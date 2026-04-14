@class NSString;

@interface InteractionAnalysisPETInteractionEvent : PBCodable <NSCopying> {
    double _timestamp;
    NSString *_associatedMemberIDs;
    NSString *_bundleID;
    NSString *_direction;
    NSString *_eventMechanism;
    NSString *_interactionID;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
