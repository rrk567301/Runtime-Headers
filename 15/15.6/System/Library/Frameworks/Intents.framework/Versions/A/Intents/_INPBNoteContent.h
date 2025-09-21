@class _INPBTextNoteContent, _INPBImageNoteContent, NSString;

@interface _INPBNoteContent : PBCodable <_INPBNoteContent, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBImageNoteContent *image;
@property (readonly, nonatomic) char hasImage;
@property (retain, nonatomic) _INPBTextNoteContent *text;
@property (readonly, nonatomic) char hasText;
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
