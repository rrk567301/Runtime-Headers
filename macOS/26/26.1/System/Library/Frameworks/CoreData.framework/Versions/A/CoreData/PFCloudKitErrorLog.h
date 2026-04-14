@class NSMutableArray;

@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray *_entries;
}

- (id)description;
- (void)dealloc;
- (id)init;

@end
