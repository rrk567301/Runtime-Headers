@class AUAudioUnit, NSMutableArray;

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_busses;
}

@property (nonatomic) struct vector<BusPropertyObserver, std::allocator<BusPropertyObserver>> { struct BusPropertyObserver *__begin_; struct BusPropertyObserver *__end_; struct { struct BusPropertyObserver *__cap_; } ; } observers;
@property (readonly) unsigned long long count;
@property (readonly, getter=isCountChangeable) BOOL countChangeable;
@property (readonly) AUAudioUnit *ownerAudioUnit;
@property (readonly) long long busType;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (BOOL)setBusCount:(unsigned long long)a0 error:(id *)a1;
- (id)initWithAudioUnit:(id)a0 busType:(long long)a1 busses:(id)a2;
- (void)indexBusses;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserverToAllBusses:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)initWithAudioUnit:(id)a0 busType:(long long)a1;
- (void)removeObserverFromAllBusses:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id).cxx_construct;
- (void)replaceBusses:(id)a0;

@end
