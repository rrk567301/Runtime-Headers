@class NSMutableArray, NSMutableDictionary;

@interface _NSPasteboardItemAuxObject : NSObject {
    NSMutableArray *_orderedTypes;
    NSMutableDictionary *_dataByType;
    NSMutableDictionary *_providersByType;
}

- (void)dealloc;
- (id)orderedTypes;
- (id)dataByType;
- (id)providersByType;

@end
