@class NSNumber, NSString;

@interface KHDBAddress : NSObject <NSCopying, NSCoding> {
    NSNumber *_modelId;
    NSString *_databaseUuid;
}

+ (id)modelIdsForAddresses:(id)a0;
+ (id)modelIdListForAddresses:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)modelId;
- (id)modelIdAsNumber;
- (id)initWithDatabaseUuid:(id)a0 modelId:(id)a1;
- (id)databaseUuid;

@end
