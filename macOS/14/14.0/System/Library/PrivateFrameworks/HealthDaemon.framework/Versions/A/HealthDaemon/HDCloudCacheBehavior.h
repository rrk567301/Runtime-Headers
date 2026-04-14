@class HDProfile;

@interface HDCloudCacheBehavior : NSObject {
    HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL shouldFetchSharingRecords;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)unitTest_setShouldFetchSharingRecords:(BOOL)a0;

@end
