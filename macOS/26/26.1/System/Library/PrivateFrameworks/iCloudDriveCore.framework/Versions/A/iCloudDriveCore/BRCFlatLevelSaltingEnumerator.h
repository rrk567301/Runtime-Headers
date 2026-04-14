@class BRCItemID, PQLResultSet;
@protocol PQLEnumeration;

@interface BRCFlatLevelSaltingEnumerator : NSEnumerator {
    PQLResultSet<PQLEnumeration> *_enumerator;
    BRCItemID *_itemID;
}

+ (id)newEnumeratorForItemID:(id)a0 clientZone:(id)a1;

- (id)nextObject;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0 clientZone:(id)a1;

@end
