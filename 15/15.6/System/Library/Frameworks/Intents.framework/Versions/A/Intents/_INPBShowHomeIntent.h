@class NSArray, _INPBDateTimeRange, NSString, _INPBIntentMetadata;

@interface _INPBShowHomeIntent : PBCodable <_INPBShowHomeIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *filters;
@property (readonly, nonatomic) unsigned long long filtersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBDateTimeRange *time;
@property (readonly, nonatomic) char hasTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)filtersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFilters:(id)a0;
- (void)clearFilters;
- (id)filtersAtIndex:(unsigned long long)a0;

@end
