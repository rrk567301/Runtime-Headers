@class NSString, NSMutableArray, NSMutableDictionary;

@interface OCXRelationships : NSObject {
    NSString *mPath;
    NSMutableArray *mRelationships;
    NSMutableDictionary *mRelationshipMap;
    unsigned long long mNextId;
}

- (void).cxx_destruct;
- (id)path;
- (BOOL)isEmpty;
- (id)initWithPath:(id)a0;
- (id)addRelationshipForKey:(id)a0 type:(id)a1 target:(id)a2;
- (id)addRelationshipForKey:(id)a0 type:(id)a1 target:(id)a2 external:(BOOL)a3;
- (id)idForKey:(id)a0;
- (id)targetForKey:(id)a0;
- (void)writeRelationshipsToFilename:(id)a0 stream:(id)a1;

@end
