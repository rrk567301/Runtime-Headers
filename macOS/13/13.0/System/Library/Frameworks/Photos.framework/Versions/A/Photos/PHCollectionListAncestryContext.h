@class NSMutableDictionary;
@protocol NSFastEnumeration;

@interface PHCollectionListAncestryContext : NSObject

@property (retain) id<NSFastEnumeration> allCollectionLists;
@property (retain) NSMutableDictionary *collectionListsByOID;

- (void).cxx_destruct;
- (id)initWithCollectionLists:(id)a0;
- (id)folderForID:(id)a0;

@end
