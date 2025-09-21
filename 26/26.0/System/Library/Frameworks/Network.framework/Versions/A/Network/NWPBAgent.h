@class NWPBAgentClass, NSData, NSString;

@interface NWPBAgent : PBCodable <NSCopying> {
    NWPBAgentClass *_agentClass;
    NSData *_agentData;
    NSString *_agentDescription;
    NSString *_agentIdentifier;
    BOOL _active;
    BOOL _networkProvider;
    BOOL _nexusProvider;
    BOOL _userActivated;
    BOOL _voluntary;
    struct { unsigned char active : 1; unsigned char networkProvider : 1; unsigned char nexusProvider : 1; unsigned char userActivated : 1; unsigned char voluntary : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
