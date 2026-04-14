@class NSMutableArray;

@interface IKInterfaceBuilderSharedDatasource : NSObject {
    NSMutableArray *_array;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (int)numberOfItems;
- (void)setNumberOfItems:(int)a0;
- (id)imageBrowser:(id)a0 itemAtIndex:(unsigned long long)a1;
- (unsigned long long)numberOfItemsInImageBrowser:(id)a0;
- (void)addImagesWithPath:(id)a0 recursive:(BOOL)a1 toArray:(id)a2;
- (void)addAnImageWithPath:(id)a0 toArray:(id)a1;

@end
