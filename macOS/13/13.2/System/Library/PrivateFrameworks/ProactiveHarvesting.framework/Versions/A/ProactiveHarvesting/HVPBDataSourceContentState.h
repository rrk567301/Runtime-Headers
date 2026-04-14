@class NSMutableArray;

@interface HVPBDataSourceContentState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *deprecatedDeferredContentStates;
@property (retain, nonatomic) NSMutableArray *deferredContentStates;

+ (Class)deprecatedDeferredContentStatesType;
+ (Class)deferredContentStatesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearDeprecatedDeferredContentStates;
- (void)addDeprecatedDeferredContentStates:(id)a0;
- (unsigned long long)deprecatedDeferredContentStatesCount;
- (id)deprecatedDeferredContentStatesAtIndex:(unsigned long long)a0;
- (void)clearDeferredContentStates;
- (void)addDeferredContentStates:(id)a0;
- (unsigned long long)deferredContentStatesCount;
- (id)deferredContentStatesAtIndex:(unsigned long long)a0;

@end
