@class NSString;

@interface _ICLLCurrentItemTransitionAction : PBCodable <NSCopying> {
    NSString *_previousItemId;
    NSString *_transitionItemId;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
