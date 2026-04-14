@class NSMutableDictionary, NSDictionary, NSURL, SMSystem_Daemon, NSArray, NSDirectoryEnumerator;
@protocol SMPathEnumerationProtocol;

@interface SMPathsUserHomeScanner : NSObject {
    unsigned long long sizeOfMiscUserHomeContents;
    unsigned long long countOfMiscUserHomeContents;
}

@property (retain) NSURL *path;
@property (readonly) SMSystem_Daemon *system;
@property (readonly) NSDictionary *longTermSystemIdentifier;
@property (retain) NSMutableDictionary *topLevelPathToSizeMap;
@property (retain) NSMutableDictionary *topLevelPathToCountMap;
@property BOOL shallowScanOnly;
@property (readonly) NSArray *allTopLevelContents;
@property (readonly) NSDirectoryEnumerator<SMPathEnumerationProtocol> *allFilesEnumerator;
@property (weak) NSArray *updateClients;

- (void).cxx_destruct;
- (void)processUserHome;
- (id)initWithRelativeHomePath:(id)a0 onSystem:(id)a1;
- (unsigned long long)sizeAndCount:(unsigned long long *)a0 ofDirectory:(id)a1;

@end
