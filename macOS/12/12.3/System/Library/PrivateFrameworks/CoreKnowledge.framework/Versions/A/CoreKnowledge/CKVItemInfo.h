@class NSString, NSUUID, NSArray;

@interface CKVItemInfo : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) long long itemType;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) NSUUID *recordId;
@property (readonly, nonatomic) NSArray *unindexedFields;

+ (id)resultItemInfoFromFTSResult:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithItemId:(id)a0 itemType:(long long)a1 originAppId:(id)a2 recordId:(id)a3;
- (id)initWithItemId:(id)a0 itemType:(long long)a1 originAppId:(id)a2 recordId:(id)a3 unindexedFields:(id)a4;
- (BOOL)isEqualToItemInfo:(id)a0;
- (id)unindexedFieldsWithType:(long long)a0;

@end
