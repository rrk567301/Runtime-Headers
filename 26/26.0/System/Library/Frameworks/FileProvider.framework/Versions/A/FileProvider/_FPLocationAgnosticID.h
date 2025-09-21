@class FPItemID;

@interface _FPLocationAgnosticID : NSObject {
    FPItemID *_itemID;
    FPItemID *_alternateID;
}

- (id)initWithItem:(id)a0;
- (id)description;
- (id)initWithItemID:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
