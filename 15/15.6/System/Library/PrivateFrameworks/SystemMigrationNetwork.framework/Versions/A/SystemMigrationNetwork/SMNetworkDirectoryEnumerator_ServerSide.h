@class NSArray, NSSet, NSURL, NSMutableSet, NSDictionary, NSString;

@interface SMNetworkDirectoryEnumerator_ServerSide : NSObject

@property (retain) NSURL *basePathURL;
@property (retain) NSURL *alternateBasePathURL;
@property (retain) NSMutableSet *hardlinkInodes;
@property (retain) NSMutableSet *cloneIDs;
@property (retain) id startingFilesystemIdentifier;
@property char autoDetectBundles;
@property char autoSizeBundles;
@property (retain) NSArray *requestedProperties;
@property (retain) NSSet *dontDescendPaths;
@property (retain) NSDictionary *restartPoint;
@property (retain) NSString *compressionFormat;
@property char stopEnumeration;

- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0;
- (char)enumerateToFileDescriptor:(int)a0;

@end
