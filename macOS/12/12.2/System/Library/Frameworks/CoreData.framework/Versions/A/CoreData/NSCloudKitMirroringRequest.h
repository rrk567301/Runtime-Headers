@class NSUUID, NSCloudKitMirroringRequestOptions, CKSchedulerActivity;

@interface NSCloudKitMirroringRequest : NSPersistentStoreRequest {
    BOOL _deferredByBackgroundTimeout;
    CKSchedulerActivity *_activity;
}

@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, copy, nonatomic) NSCloudKitMirroringRequestOptions *options;
@property (readonly, copy, nonatomic) id /* block */ requestCompletionBlock;

+ (id)allRequestClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (unsigned long long)requestType;
- (id)initWithActivity:(id)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)validateForUseWithStore:(id)a0 error:(id *)a1;

@end
