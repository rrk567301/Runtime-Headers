@class NSArray, NSString;

@interface _INPBQueryHealthSampleIntentResponse : PBCodable <_INPBQueryHealthSampleIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *resultValues;
@property (readonly, nonatomic) unsigned long long resultValuesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)resultValuesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addResultValues:(id)a0;
- (void)clearResultValues;
- (id)resultValuesAtIndex:(unsigned long long)a0;

@end
