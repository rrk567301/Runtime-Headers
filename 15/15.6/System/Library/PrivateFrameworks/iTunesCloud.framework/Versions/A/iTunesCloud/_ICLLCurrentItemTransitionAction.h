@class NSString;

@interface _ICLLCurrentItemTransitionAction : PBCodable <NSCopying> {
    NSString *_previousItemId;
    NSString *_transitionItemId;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
