@class NSString, _GCDevicePhysicalInputBase;
@protocol _GCDevicePhysicalInputViewState;

@interface _GCDevicePhysicalInputView : NSObject <_GCDevicePhysicalInputViewState, _GCDevicePhysicalInputViewInitializationContext> {
    id<_GCDevicePhysicalInputViewState> _storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) _GCDevicePhysicalInputBase *implementation;

- (oneway void)release;
- (void)dealloc;
- (BOOL)allowsWeakReference;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (void)view:(id)a0 setPrimitiveValue:(unsigned long long)a1 forSlot:(unsigned long long *)a2;
- (id)initWith:(id)a0 context:(id)a1;
- (unsigned long long)view:(id)a0 allocateObjectSlotForTransaction:(BOOL)a1 withCopyOfValueFromView:(id)a2 slot:(unsigned long long)a3;
- (unsigned long long)view:(id)a0 allocatePrimitiveSlotForTransaction:(BOOL)a1 withCopyOfValueFromView:(id)a2 slot:(unsigned long long)a3;
- (unsigned long long)view:(id)a0 makeReferenceToView:(id)a1;
- (id)view:(id)a0 objectValueForSlot:(unsigned long long *)a1;
- (unsigned long long)view:(id)a0 primitiveValueForSlot:(unsigned long long *)a1;
- (void)view:(id)a0 setObjectValue:(id)a1 forSlot:(unsigned long long *)a2 policy:(unsigned long long)a3;
- (id)view:(id)a0 viewForSlot:(unsigned long long *)a1;

@end
