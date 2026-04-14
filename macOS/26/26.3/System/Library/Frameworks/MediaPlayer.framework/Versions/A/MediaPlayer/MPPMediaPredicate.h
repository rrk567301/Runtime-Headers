@class MPPSearchStringPredicate, MPPPersistentIDsPredicate, MPPPropertyPredicate, MPPCompoundPredicate, MPPConditionalPredicate;

@interface MPPMediaPredicate : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasPropertyPredicate;
@property (retain, nonatomic) MPPPropertyPredicate *propertyPredicate;
@property (readonly, nonatomic) BOOL hasCompoundPredicate;
@property (retain, nonatomic) MPPCompoundPredicate *compoundPredicate;
@property (readonly, nonatomic) BOOL hasConditionalPredicate;
@property (retain, nonatomic) MPPConditionalPredicate *conditionalPredicate;
@property (readonly, nonatomic) BOOL hasPersistentIDsPredicate;
@property (retain, nonatomic) MPPPersistentIDsPredicate *persistentIDsPredicate;
@property (readonly, nonatomic) BOOL hasSearchStringPredicate;
@property (retain, nonatomic) MPPSearchStringPredicate *searchStringPredicate;

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
