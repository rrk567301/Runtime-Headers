@class NSString, NSData;

@interface TRIMetric : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) char hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (readonly, nonatomic) char hasCategoricalValue;
@property (retain, nonatomic) NSString *categoricalValue;
@property (readonly, nonatomic) char hasUserDefinedValue;
@property (retain, nonatomic) NSData *userDefinedValue;

+ (id)metricWithName:(id)a0;
+ (id)metricWithName:(id)a0 categoricalValue:(id)a1;
+ (id)metricWithName:(id)a0 doubleValue:(double)a1;
+ (id)metricWithName:(id)a0 integerValue:(long long)a1;
+ (id)metricWithName:(id)a0 userDefinedValue:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
