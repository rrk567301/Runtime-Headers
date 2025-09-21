@class SISchemaAnnounceNotifications, NSData;

@interface SISchemaAnnounceEnabledStatus : SISchemaInstrumentationMessage {
    struct { unsigned char announceMessagesEnabled : 1; unsigned char announceCallsEnabled : 1; } _has;
}

@property (nonatomic) char announceMessagesEnabled;
@property (nonatomic) char hasAnnounceMessagesEnabled;
@property (nonatomic) char announceCallsEnabled;
@property (nonatomic) char hasAnnounceCallsEnabled;
@property (retain, nonatomic) SISchemaAnnounceNotifications *announceNotifications;
@property (nonatomic) char hasAnnounceNotifications;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAnnounceCallsEnabled;
- (void)deleteAnnounceMessagesEnabled;
- (void)deleteAnnounceNotifications;
- (id)suppressMessageUnderConditions;

@end
