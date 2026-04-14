@class NSString, KVPriorInfo;

@interface CKVRawSpeechProfileEntityMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long categoryIndex;
@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) KVPriorInfo *priorInfo;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCategoryIndex:(unsigned long long)a0 itemId:(id)a1 priorInfo:(id)a2;
- (BOOL)isEqualToRawSpeechProfileEntityMetadata:(id)a0;

@end
