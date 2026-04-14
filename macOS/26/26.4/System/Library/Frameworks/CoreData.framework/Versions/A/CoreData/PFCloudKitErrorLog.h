@class NSMutableArray;

@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray *_entries;
}

- (id)init;
- (id)description;
- (void)dealloc;

@end
