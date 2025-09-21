@class NSString, NSArray, _INPBIntentMetadata;

@interface _INPBGenericIntent : PBCodable <_INPBGenericIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) _INPBIntentMetadata *metadata;
@property (readonly, nonatomic) char hasMetadata;
@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) unsigned long long parametersCount;
@property (copy, nonatomic) NSString *verb;
@property (readonly, nonatomic) char hasVerb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)parametersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;

@end
