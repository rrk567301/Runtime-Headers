@class NSString, _INPBHomeFilter;

@interface _INPBAnnouncementRecord : PBCodable <_INPBAnnouncementRecord, NSSecureCoding, NSCopying> {
    struct { unsigned char duration : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double duration;
@property (nonatomic) char hasDuration;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) _INPBHomeFilter *originator;
@property (readonly, nonatomic) char hasOriginator;
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
