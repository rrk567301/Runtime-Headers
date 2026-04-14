@class NSString, NSNumber;

@interface BLJaliscoBookletItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *storeDownloadParameters;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSNumber *size;

+ (id)arrayWithServerBookletItems:(id)a0;
+ (id)itemWithServerBookletItem:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
