@class NSMutableData, NSMutableArray;

@interface SGCNContactIdentifierCollection : NSObject {
    NSMutableData *_optimizedBuffer;
    NSMutableArray *_unoptimizedIdentifiers;
}

- (id)init;
- (void).cxx_destruct;
- (char)_optimizeAndAddCNContactIdentifier:(id)a0;
- (void)addCNContactIdentifier:(id)a0;
- (id)proxyArray;

@end
