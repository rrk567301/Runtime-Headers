@class NSString;

@interface _TabSnapshotOnDiskImageStorageSaveOperation : NSObject

@property long long fileOperationStatus;
@property long long metadataOperationStatus;
@property (readonly, copy) NSString *uniqueIdentifier;

- (id)initWithUniqueIdentifier:(id)a0;
- (void).cxx_destruct;

@end
