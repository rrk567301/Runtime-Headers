@class NSDate, FMLHandle;

@interface FMLFriend : NSObject

@property (retain) FMLHandle *handle;
@property long long handleType;
@property (retain) NSDate *createdAt;
@property (retain) NSDate *expiry;
@property long long origin;
@property BOOL originatedFromTheSameClient;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)comparisonIdentifier;
- (id)initWithHandle:(id)a0 handleType:(long long)a1 createDate:(id)a2 expiry:(id)a3 origin:(long long)a4 originatedFromTheSameClient:(BOOL)a5;

@end
