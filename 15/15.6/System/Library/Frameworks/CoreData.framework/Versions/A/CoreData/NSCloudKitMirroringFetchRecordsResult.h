@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSArray *updatedObjectIDs;
@property (readonly, nonatomic) NSDictionary *failedObjectIDsToError;

- (void)dealloc;
- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 success:(char)a2 madeChanges:(char)a3 updatedObjectIDs:(id)a4 failedObjectIDToError:(id)a5 error:(id)a6;

@end
