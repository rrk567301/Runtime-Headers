@class NSArray, NSSet, NSMutableSet, BTMManager;

@interface BTMList : NSObject <NSSecureCoding> {
    BTMManager *_manager;
    NSSet *_containers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *items;
@property (readonly) NSMutableSet *observers;
@property unsigned int uid;
@property (readonly) long long type;

- (id)itemAtIndex:(unsigned long long)a0;
- (BOOL)refresh;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsItem:(id)a0;
- (unsigned long long)indexOfItem:(id)a0;
- (BOOL)removeItem:(id)a0 error:(id *)a1;
- (BOOL)updateItem:(id)a0 error:(id *)a1;
- (id)initWithItems:(id)a0 uid:(unsigned int)a1 type:(long long)a2 manager:(id)a3;
- (void)addListObserver:(id)a0;
- (id)initWithItems:(id)a0 uid:(unsigned int)a1 type:(long long)a2;
- (BOOL)refreshWithError:(id *)a0;
- (void)removeListObserver:(id)a0;
- (BOOL)updateItems:(id)a0 error:(id *)a1;

@end
