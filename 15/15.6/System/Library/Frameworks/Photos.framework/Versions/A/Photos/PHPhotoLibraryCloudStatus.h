@class CPLStatus, NSDate;

@interface PHPhotoLibraryCloudStatus : NSObject {
    CPLStatus *_cplStatus;
}

@property (readonly, getter=isCloudSyncEnabled) char cloudSyncEnabled;
@property (readonly) NSDate *lastSyncDate;
@property (readonly) NSDate *firstSyncDate;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)cplStatus;
- (id)initWithCPLStatus:(id)a0;

@end
