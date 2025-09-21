@class NSString, NSData;

@interface BookDataStore.CRDTModelSyncEntity : BCCloudData <BCCloudData> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_logger;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSData *protoData;

+ (id)propertyIDKey;

- (id)mutableCopy;
- (void).cxx_destruct;
- (id)identifier;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (id)recordType;
- (id)zoneName;
- (void)configureFromCloudData:(id)a0 withMergers:(id)a1;
- (char)isEqualExceptForDate:(id)a0 ignoringEmptySalt:(char)a1;
- (void)resolveConflictsFromRecord:(id)a0 withResolvers:(id)a1;

@end
