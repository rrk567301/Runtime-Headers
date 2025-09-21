@class NSString, NSData;

@interface RRSchemaProvisionalRRGroupIdentifier : SISchemaInstrumentationMessage {
    struct { unsigned char seq : 1; } _has;
}

@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) char hasGroupId;
@property (nonatomic) unsigned int seq;
@property (nonatomic) char hasSeq;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
