@class NSString, FI_TTableView;

@interface FI_TTableViewDataSource : NSArrayController <NSTableViewDataSource> {
    struct TNSWeakPtr<FI_TTableView> { FI_TTableView *fWeakObject; } _weakTableView;
    struct vector<TKeyValueBinder, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__begin_; struct TKeyValueBinder *__end_; struct TKeyValueBinder *__cap_; } _keyValueBinders;
}

@property (weak, nonatomic) FI_TTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)initCommon;
- (void).cxx_destruct;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)awakeFromNib;
- (id)initWithContent:(id)a0;
- (BOOL)tableView:(id)a0 acceptDrop:(id)a1 row:(long long)a2 dropOperation:(unsigned long long)a3;
- (unsigned long long)tableView:(id)a0 validateDrop:(id)a1 proposedRow:(long long)a2 proposedDropOperation:(unsigned long long)a3;
- (void)awakeCommon;
- (void)bindToTableColumn:(id)a0;
- (void)replaceObjects:(id)a0 withObjects:(id)a1;
- (void)unbindFromTableColumn:(id)a0;

@end
