@class NSString;

@interface _ICLLReactionAction : PBCodable <NSCopying> {
    NSString *_itemId;
    NSString *_reaction;
    NSString *_reactionId;
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
