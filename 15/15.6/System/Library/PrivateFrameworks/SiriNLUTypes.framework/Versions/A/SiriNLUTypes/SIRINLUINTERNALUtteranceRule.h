@class NSString, NSMutableArray, SIRINLUINTERNALCompareOptions;

@interface SIRINLUINTERNALUtteranceRule : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasPattern;
@property (retain, nonatomic) NSString *pattern;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasCompareOptions;
@property (retain, nonatomic) SIRINLUINTERNALCompareOptions *compareOptions;
@property (retain, nonatomic) NSMutableArray *spansForNamedCaptureGroups;

+ (Class)spansForNamedCaptureGroupsType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)clearSpansForNamedCaptureGroups;
- (unsigned long long)spansForNamedCaptureGroupsCount;
- (void)addSpansForNamedCaptureGroups:(id)a0;
- (id)spansForNamedCaptureGroupsAtIndex:(unsigned long long)a0;

@end
