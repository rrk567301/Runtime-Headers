@class NSString, NSMutableArray, SIRINLUINTERNALCompareOptions;

@interface SIRINLUINTERNALUtteranceRule : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPattern;
@property (retain, nonatomic) NSString *pattern;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCompareOptions;
@property (retain, nonatomic) SIRINLUINTERNALCompareOptions *compareOptions;
@property (retain, nonatomic) NSMutableArray *spansForNamedCaptureGroups;

+ (Class)spansForNamedCaptureGroupsType;

- (int)StringAsType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)typeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearSpansForNamedCaptureGroups;
- (unsigned long long)spansForNamedCaptureGroupsCount;
- (void)addSpansForNamedCaptureGroups:(id)a0;
- (id)spansForNamedCaptureGroupsAtIndex:(unsigned long long)a0;

@end
