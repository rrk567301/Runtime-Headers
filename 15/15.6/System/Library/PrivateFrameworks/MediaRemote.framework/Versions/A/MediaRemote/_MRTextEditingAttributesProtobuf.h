@class NSString, _MRTextInputTraitsProtobuf;

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasPrompt;
@property (retain, nonatomic) NSString *prompt;
@property (readonly, nonatomic) char hasInputTraits;
@property (retain, nonatomic) _MRTextInputTraitsProtobuf *inputTraits;

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

@end
