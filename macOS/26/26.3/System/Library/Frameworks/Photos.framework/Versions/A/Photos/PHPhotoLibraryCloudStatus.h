@class CPLStatus, NSDate;

@interface PHPhotoLibraryCloudStatus : NSObject {
    CPLStatus *_cplStatus;
}

@property (readonly, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;
@property (readonly) NSDate *lastSyncProgressDate;
@property (readonly) NSDate *firstSyncCompletionDate;

- (id)statusDescription;
- (id)description;
- (void).cxx_destruct;
- (id)cplStatus;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCPLStatus:(id)a0 isEnabled:(BOOL)a1;

@end
