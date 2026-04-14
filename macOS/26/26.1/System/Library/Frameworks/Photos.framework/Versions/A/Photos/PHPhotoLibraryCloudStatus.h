@class CPLStatus, NSDate;

@interface PHPhotoLibraryCloudStatus : NSObject {
    CPLStatus *_cplStatus;
}

@property (readonly, getter=isCloudSyncEnabled) BOOL cloudSyncEnabled;
@property (readonly) NSDate *lastSyncProgressDate;
@property (readonly) NSDate *firstSyncCompletionDate;

- (id)statusDescription;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)cplStatus;
- (BOOL)isEqual:(id)a0;
- (id)initWithCPLStatus:(id)a0 isEnabled:(BOOL)a1;

@end
