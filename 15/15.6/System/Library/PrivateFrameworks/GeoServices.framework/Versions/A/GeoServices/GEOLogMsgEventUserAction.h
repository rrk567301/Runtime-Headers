@class PBDataReader, NSString, GEOLogMsgEventUserActionModuleInfo, PBUnknownFields;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionRichProviderId;
    GEOLogMsgEventUserActionModuleInfo *_moduleInfo;
    NSString *_userActionEventKey;
    NSString *_userActionEventValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _buttonType;
    int _userActionEventAction;
    int _userActionEventTarget;
    struct { unsigned char has_buttonType : 1; unsigned char has_userActionEventAction : 1; unsigned char has_userActionEventTarget : 1; unsigned char read_unknownFields : 1; unsigned char read_actionRichProviderId : 1; unsigned char read_moduleInfo : 1; unsigned char read_userActionEventKey : 1; unsigned char read_userActionEventValue : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasUserActionEventKey;
@property (retain, nonatomic) NSString *userActionEventKey;
@property (readonly, nonatomic) char hasUserActionEventValue;
@property (retain, nonatomic) NSString *userActionEventValue;
@property (nonatomic) char hasUserActionEventTarget;
@property (nonatomic) int userActionEventTarget;
@property (nonatomic) char hasUserActionEventAction;
@property (nonatomic) int userActionEventAction;
@property (readonly, nonatomic) char hasModuleInfo;
@property (retain, nonatomic) GEOLogMsgEventUserActionModuleInfo *moduleInfo;
@property (nonatomic) char hasButtonType;
@property (nonatomic) int buttonType;
@property (readonly, nonatomic) char hasActionRichProviderId;
@property (retain, nonatomic) NSString *actionRichProviderId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsUserActionEventAction:(id)a0;
- (int)StringAsButtonType:(id)a0;
- (int)StringAsUserActionEventTarget:(id)a0;
- (id)buttonTypeAsString:(int)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)userActionEventActionAsString:(int)a0;
- (id)userActionEventTargetAsString:(int)a0;

@end
