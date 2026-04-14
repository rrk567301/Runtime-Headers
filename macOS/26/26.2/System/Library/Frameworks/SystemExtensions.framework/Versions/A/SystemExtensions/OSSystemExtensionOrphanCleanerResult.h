@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface OSSystemExtensionOrphanCleanerResult : NSObject

@property (retain) NSMutableArray *s;
@property (retain) NSMutableDictionary *f;
@property (readonly) NSArray *successfullyCleanedUp;
@property (readonly) NSDictionary *failedToCleanup;

- (void).cxx_destruct;
- (id)init;

@end
