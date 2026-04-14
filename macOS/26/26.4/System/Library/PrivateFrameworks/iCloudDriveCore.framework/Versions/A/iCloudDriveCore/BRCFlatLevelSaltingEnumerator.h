@class BRCItemID, PQLResultSet;
@protocol PQLEnumeration;

@interface BRCFlatLevelSaltingEnumerator : NSEnumerator {
    PQLResultSet<PQLEnumeration> *_enumerator;
    BRCItemID *_itemID;
}

+ (id)newEnumeratorForItemID:(id)a0 clientZone:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)nextObject;
- (id)initWithItemID:(id)a0 clientZone:(id)a1;

@end
