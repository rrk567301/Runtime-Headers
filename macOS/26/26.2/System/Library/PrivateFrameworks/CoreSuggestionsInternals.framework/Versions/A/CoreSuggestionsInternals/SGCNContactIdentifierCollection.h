@class NSMutableData, NSMutableArray;

@interface SGCNContactIdentifierCollection : NSObject {
    NSMutableData *_optimizedBuffer;
    NSMutableArray *_unoptimizedIdentifiers;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)_optimizeAndAddCNContactIdentifier:(id)a0;
- (void)addCNContactIdentifier:(id)a0;
- (id)proxyArray;

@end
