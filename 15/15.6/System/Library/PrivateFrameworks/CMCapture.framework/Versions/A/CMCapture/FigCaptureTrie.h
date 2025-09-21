@class NSDictionary, NSMutableDictionary;

@interface FigCaptureTrie : NSObject {
    char _complete;
    NSMutableDictionary *_subTries;
}

@property (readonly, nonatomic, getter=isComplete) char complete;
@property (readonly, nonatomic) NSDictionary *children;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithPath:(id)a0;
- (void)addPath:(id)a0;
- (char)containsPath:(id)a0;
- (id)getSubTrie:(id)a0;
- (id)initWithPathArray:(id)a0;
- (void)enumeratePaths:(id /* block */)a0;
- (void)_addPath:(id)a0 index:(unsigned long long)a1;
- (void)_enumeratePathsWithPrefix:(id)a0 stop:(char *)a1 processLeaf:(id /* block */)a2;
- (id)_extractFrom:(id)a0 writeTarget:(id)a1 destinationMutability:(int)a2 overwrite:(char)a3;
- (char)containsParentPath:(id)a0;
- (id)extractFrom:(id)a0;
- (void)extractFrom:(id)a0 writeInto:(id)a1 assumeMutable:(char)a2 overwrite:(char)a3;
- (id)generatePathArray;

@end
