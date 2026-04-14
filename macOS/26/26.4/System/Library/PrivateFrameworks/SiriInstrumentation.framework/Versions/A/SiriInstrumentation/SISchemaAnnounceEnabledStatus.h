@class SISchemaAnnounceNotifications, NSData;

@interface SISchemaAnnounceEnabledStatus : SISchemaInstrumentationMessage {
    struct { unsigned char announceMessagesEnabled : 1; unsigned char announceCallsEnabled : 1; } _has;
}

@property (nonatomic) BOOL announceMessagesEnabled;
@property (nonatomic) BOOL hasAnnounceMessagesEnabled;
@property (nonatomic) BOOL announceCallsEnabled;
@property (nonatomic) BOOL hasAnnounceCallsEnabled;
@property (retain, nonatomic) SISchemaAnnounceNotifications *announceNotifications;
@property (nonatomic) BOOL hasAnnounceNotifications;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAnnounceCallsEnabled;
- (void)deleteAnnounceMessagesEnabled;
- (void)deleteAnnounceNotifications;

@end
