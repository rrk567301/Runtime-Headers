@class NSString;

@interface CKDModifyRecordsOperationReReferenceBatchKey : NSObject <NSCopying> {
    NSString *_owner;
}

@property (readonly) long long databaseScope;
@property (readonly) BOOL isClone;
@property (readonly) BOOL isPackageSection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPackageReference:(id)a0 destinationRecordZoneID:(id)a1;

@end
