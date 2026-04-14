@class NSArray;

@interface CSKStreamDataBatch : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *entities;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appendEntitiesFromBatch:(id)a0;
- (void)appendEntitiesFromBatch:(id)a0 filteredUsingFilters:(id)a1;
- (void)appendEntitiesFromBatch:(id)a0 filteredUsingFilters:(id)a1 observer:(id)a2;
- (id)filteredEntitiesUsingFilters:(id)a0;
- (id)filteredEntitiesUsingFilters:(id)a0 observer:(id)a1;
- (BOOL)isEqualToDataBatch:(id)a0;

@end
