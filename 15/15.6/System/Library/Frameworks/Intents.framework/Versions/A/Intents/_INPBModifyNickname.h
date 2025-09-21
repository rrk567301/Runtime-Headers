@class NSString, _INPBString;

@interface _INPBModifyNickname : PBCodable <_INPBModifyNickname, NSSecureCoding, NSCopying> {
    struct { unsigned char isRemoval : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isRemoval;
@property (nonatomic) char hasIsRemoval;
@property (retain, nonatomic) _INPBString *targetNickname;
@property (readonly, nonatomic) char hasTargetNickname;
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

@end
