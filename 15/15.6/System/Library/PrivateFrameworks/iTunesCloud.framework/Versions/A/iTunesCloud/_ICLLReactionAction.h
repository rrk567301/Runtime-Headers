@class NSString;

@interface _ICLLReactionAction : PBCodable <NSCopying> {
    NSString *_itemId;
    NSString *_reaction;
    NSString *_reactionId;
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
