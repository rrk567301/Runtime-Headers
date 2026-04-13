@class NSString, NSData;

@interface MHSchemaFirstPassChannelSelectionScore : SISchemaInstrumentationMessage {
    struct { unsigned char firstPassScore : 1; } _has;
}

@property (copy, nonatomic) NSString *channelString;
@property (nonatomic) BOOL hasChannelString;
@property (nonatomic) float firstPassScore;
@property (nonatomic) BOOL hasFirstPassScore;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end
