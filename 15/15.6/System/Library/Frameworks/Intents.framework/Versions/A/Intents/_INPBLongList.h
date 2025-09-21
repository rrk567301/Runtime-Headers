@class NSArray, _INPBCondition, NSString;

@interface _INPBLongList : PBCodable <_INPBLongList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBCondition *conditionType;
@property (readonly, nonatomic) char hasConditionType;
@property (copy, nonatomic) NSArray *dataStrings;
@property (readonly, nonatomic) unsigned long long dataStringsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)dataStringType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDataString:(id)a0;
- (void)clearDataStrings;
- (id)dataStringAtIndex:(unsigned long long)a0;

@end
