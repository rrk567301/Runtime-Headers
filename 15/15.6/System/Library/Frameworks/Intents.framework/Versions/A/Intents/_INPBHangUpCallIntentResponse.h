@class NSString;

@interface _INPBHangUpCallIntentResponse : PBCodable <_INPBHangUpCallIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char hungUpCallType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int hungUpCallType;
@property (nonatomic) char hasHungUpCallType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsHungUpCallType:(id)a0;
- (id)hungUpCallTypeAsString:(int)a0;

@end
