@class NSUUID, NSMutableDictionary, NSMutableSet, NSString;

@interface HMDCoreDataCloudTransformChangeSet : NSObject {
    NSMutableSet *_inserts;
    NSMutableDictionary *_updates;
    NSMutableDictionary *_deletes;
    BOOL _shouldTransform;
    NSUUID *_homeModelID;
    long long _qualityOfService;
    NSString *_clientIdentifier;
}

- (id)description;
- (void).cxx_destruct;

@end
