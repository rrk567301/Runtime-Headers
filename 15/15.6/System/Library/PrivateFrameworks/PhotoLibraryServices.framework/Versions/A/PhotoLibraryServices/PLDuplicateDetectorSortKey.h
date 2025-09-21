@class NSString;

@interface PLDuplicateDetectorSortKey : NSObject

@property (retain) NSString *key;
@property char reverse;

+ (id)sortKey:(id)a0 reverse:(char)a1;

- (void).cxx_destruct;

@end
