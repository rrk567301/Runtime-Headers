@class NSString, HDCodableSample;

@interface HDCodableStateOfMind : PBCodable <HDDecoding, NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _domains;
    struct { long long *list; unsigned long long count; unsigned long long size; } _labels;
    struct { unsigned char reflectiveInterval : 1; unsigned char valence : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasReflectiveInterval;
@property (nonatomic) long long reflectiveInterval;
@property (nonatomic) char hasValence;
@property (nonatomic) double valence;
@property (readonly, nonatomic) unsigned long long labelsCount;
@property (readonly, nonatomic) long long *labels;
@property (readonly, nonatomic) unsigned long long domainsCount;
@property (readonly, nonatomic) long long *domains;
@property (readonly, nonatomic) char hasContext;
@property (retain, nonatomic) NSString *context;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearLabels;
- (void)clearDomains;
- (long long)domainsAtIndex:(unsigned long long)a0;
- (void)addDomains:(long long)a0;
- (void)addLabels:(long long)a0;
- (char)applyToObject:(id)a0;
- (long long)labelsAtIndex:(unsigned long long)a0;
- (void)setDomains:(long long *)a0 count:(unsigned long long)a1;
- (void)setLabels:(long long *)a0 count:(unsigned long long)a1;

@end
