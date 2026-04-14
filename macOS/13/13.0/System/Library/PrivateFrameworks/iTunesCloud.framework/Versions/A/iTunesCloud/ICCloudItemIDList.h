@class NSMutableArray;

@interface ICCloudItemIDList : NSObject <NSSecureCoding, NSCopying> {
    NSMutableArray *_itemIDs;
    NSMutableArray *_idTypes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addGlobalPlaylistID:(id)a0;
- (void)addCloudItemID:(unsigned long long)a0 idType:(long long)a1;
- (void)insertCloudItemID:(unsigned long long)a0 idType:(long long)a1 atIndex:(unsigned long long)a2;
- (void)enumerateCloudItemIDsUsingBlock:(id /* block */)a0;

@end
