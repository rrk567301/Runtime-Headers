@class NWPBAgentClass, NSData, NSString;

@interface NWPBAgent : PBCodable <NSCopying> {
    NWPBAgentClass *_agentClass;
    NSData *_agentData;
    NSString *_agentDescription;
    NSString *_agentIdentifier;
    char _active;
    char _networkProvider;
    char _nexusProvider;
    char _userActivated;
    char _voluntary;
    struct { unsigned char active : 1; unsigned char networkProvider : 1; unsigned char nexusProvider : 1; unsigned char userActivated : 1; unsigned char voluntary : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
