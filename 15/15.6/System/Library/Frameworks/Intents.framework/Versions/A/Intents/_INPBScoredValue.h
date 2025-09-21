@class NSString;

@interface _INPBScoredValue : PBCodable <_INPBScoredValue, NSSecureCoding, NSCopying> {
    struct { unsigned char score : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long score;
@property (nonatomic) char hasScore;
@property (copy, nonatomic) NSString *value;
@property (readonly, nonatomic) char hasValue;
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
