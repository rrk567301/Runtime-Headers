@class NSString;

@interface WFPBCreateFolderEvent : PBCodable <NSCopying> {
    struct { unsigned char icon : 1; unsigned char shortcutCount : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasIcon;
@property (nonatomic) unsigned int icon;
@property (nonatomic) char hasShortcutCount;
@property (nonatomic) unsigned int shortcutCount;
@property (readonly, nonatomic) char hasFolderSource;
@property (retain, nonatomic) NSString *folderSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
