@class NSString;

@interface _INPBSticker : PBCodable <_INPBSticker, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleID;
@property (readonly, nonatomic) char hasAppBundleID;
@property (copy, nonatomic) NSString *avatarDescriptor;
@property (readonly, nonatomic) char hasAvatarDescriptor;
@property (copy, nonatomic) NSString *emoji;
@property (readonly, nonatomic) char hasEmoji;
@property (copy, nonatomic) NSString *stickerDescription;
@property (readonly, nonatomic) char hasStickerDescription;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
