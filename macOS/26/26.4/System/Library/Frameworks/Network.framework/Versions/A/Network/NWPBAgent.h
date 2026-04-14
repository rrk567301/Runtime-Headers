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
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
