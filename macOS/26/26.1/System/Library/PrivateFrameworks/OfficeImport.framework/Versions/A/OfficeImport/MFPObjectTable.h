@class NSMutableDictionary;

@interface MFPObjectTable : NSObject {
    NSMutableDictionary *mObjects;
}

- (void)setObject:(id)a0 atIndex:(int)a1;
- (id)objectAtIndex:(int)a0;
- (void).cxx_destruct;
- (id)init;

@end
