@class NSMutableSet, NSFileHandle;

@interface TRICKQueryLogGuardedData : NSObject {
    char failed;
    NSMutableSet *uniqueLines;
    NSFileHandle *fh;
}

- (void).cxx_destruct;

@end
