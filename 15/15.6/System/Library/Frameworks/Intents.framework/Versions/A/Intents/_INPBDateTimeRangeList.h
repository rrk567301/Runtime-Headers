@class NSArray, _INPBCondition, NSString;

@interface _INPBDateTimeRangeList : PBCodable <_INPBDateTimeRangeList, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBCondition *condition;
@property (readonly, nonatomic) char hasCondition;
@property (copy, nonatomic) NSArray *dateRanges;
@property (readonly, nonatomic) unsigned long long dateRangesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)dateRangeType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearDateRanges;
- (void)addDateRange:(id)a0;
- (id)dateRangeAtIndex:(unsigned long long)a0;

@end
