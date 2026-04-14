@class NSString;

@interface _ICLLReactionAction : PBCodable <NSCopying> {
    NSString *_itemId;
    NSString *_reaction;
    NSString *_reactionId;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
