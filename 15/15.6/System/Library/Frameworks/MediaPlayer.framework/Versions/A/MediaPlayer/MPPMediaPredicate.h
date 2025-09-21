@class MPPSearchStringPredicate, MPPPersistentIDsPredicate, MPPPropertyPredicate, MPPCompoundPredicate, MPPConditionalPredicate;

@interface MPPMediaPredicate : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasPropertyPredicate;
@property (retain, nonatomic) MPPPropertyPredicate *propertyPredicate;
@property (readonly, nonatomic) char hasCompoundPredicate;
@property (retain, nonatomic) MPPCompoundPredicate *compoundPredicate;
@property (readonly, nonatomic) char hasConditionalPredicate;
@property (retain, nonatomic) MPPConditionalPredicate *conditionalPredicate;
@property (readonly, nonatomic) char hasPersistentIDsPredicate;
@property (retain, nonatomic) MPPPersistentIDsPredicate *persistentIDsPredicate;
@property (readonly, nonatomic) char hasSearchStringPredicate;
@property (retain, nonatomic) MPPSearchStringPredicate *searchStringPredicate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
