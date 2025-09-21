@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {
    NSDictionary *_entityNameToAttributesToFetch;
    NSDictionary *_entityNameToAttributeNamesToFetch;
    char _editable;
    unsigned long long _perOperationObjectThreshold;
}

@property (copy, nonatomic) NSArray *objectIDsToFetch;
@property (readonly, copy, nonatomic) NSDictionary *entityNameToAttributesToFetch;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)setEntityNameToAttributeNamesToFetch:(id)a0;
- (void)setEntityNameToAttributesToFetch:(id)a0;
- (char)validateForUseWithStore:(id)a0 error:(id *)a1;

@end
