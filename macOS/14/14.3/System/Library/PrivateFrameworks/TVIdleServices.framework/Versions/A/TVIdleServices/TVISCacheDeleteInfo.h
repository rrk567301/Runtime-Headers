@class NSOrderedSet;

@interface TVISCacheDeleteInfo : NSObject

@property (readonly, nonatomic) struct __CFDictionary { } *infoDictionary;
@property (readonly, nonatomic) unsigned long long purgeableAmount;
@property (readonly, nonatomic) NSOrderedSet *purgeableItems;

- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPurgeableItems:(id)a0;
- (id)infoByAddingInfo:(id)a0;

@end
