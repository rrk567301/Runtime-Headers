@class NSString;

@interface _INPBAirline : PBCodable <_INPBAirline, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *iataCode;
@property (readonly, nonatomic) char hasIataCode;
@property (copy, nonatomic) NSString *icaoCode;
@property (readonly, nonatomic) char hasIcaoCode;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasName;
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
