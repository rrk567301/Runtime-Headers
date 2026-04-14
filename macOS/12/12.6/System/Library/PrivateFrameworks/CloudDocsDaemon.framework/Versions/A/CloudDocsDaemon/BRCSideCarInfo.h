@class BRFieldCKInfo, NSData;

@interface BRCSideCarInfo : NSObject

@property (retain, nonatomic) BRFieldCKInfo *ckInfo;
@property (nonatomic) long long lastUsedTime;
@property (nonatomic) long long favoriteRank;
@property (retain, nonatomic) NSData *finderTags;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)descriptionWithContext:(id)a0;
- (BOOL)hasfieldsToSync;

@end
