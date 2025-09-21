@class NSString, NSError, NSCloudKitMirroringRequest;

@interface NSCloudKitMirroringResult : NSPersistentStoreResult

@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) NSCloudKitMirroringRequest *request;
@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) char madeChanges;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 success:(char)a2 madeChanges:(char)a3 error:(id)a4;

@end
