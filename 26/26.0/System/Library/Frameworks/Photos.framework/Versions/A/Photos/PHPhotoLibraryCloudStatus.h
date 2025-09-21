@class CPLStatus, NSDate;

@interface PHPhotoLibraryCloudStatus : NSObject {
    CPLStatus *_cplStatus;
}

@property (readonly, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;
@property (readonly) NSDate *lastSyncProgressDate;
@property (readonly) NSDate *firstSyncCompletionDate;

- (id)statusDescription;
- (id)cplStatus;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCPLStatus:(id)a0 isEnabled:(BOOL)a1;

@end
