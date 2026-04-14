@class HDQueryServer, NSString;

@interface _HDQueryDatabaseAccessBlock : NSObject {
    id /* block */ _block;
    HDQueryServer *_queryServer;
    NSString *_processBundleIdentifier;
    long long _qualityOfService;
    double _creationTime;
}

- (void).cxx_destruct;
- (id)description;

@end
