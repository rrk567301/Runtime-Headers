@class NSString, NSData;

@interface RRSchemaProvisionalRRGroupIdentifier : SISchemaInstrumentationMessage {
    struct { unsigned char seq : 1; } _has;
}

@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) BOOL hasGroupId;
@property (nonatomic) unsigned int seq;
@property (nonatomic) BOOL hasSeq;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
