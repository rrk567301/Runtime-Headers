@class FPItemID;

@interface _FPLocationAgnosticID : NSObject {
    FPItemID *_itemID;
    FPItemID *_alternateID;
}

- (id)initWithItem:(id)a0;
- (id)initWithItemID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
