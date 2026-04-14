@class NSMutableArray;

@interface CPDocument : NSObject {
    NSMutableArray *pages;
}

- (void)dealloc;
- (id)init;
- (void)addPage:(id)a0;

@end
