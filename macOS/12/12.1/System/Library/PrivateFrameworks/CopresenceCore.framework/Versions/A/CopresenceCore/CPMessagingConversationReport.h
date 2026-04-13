@class NSString;

@interface CPMessagingConversationReport : PBCodable <NSCopying> {
    struct { unsigned char timebase : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasConversationID;
@property (retain, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL hasTimebase;
@property (nonatomic) double timebase;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
