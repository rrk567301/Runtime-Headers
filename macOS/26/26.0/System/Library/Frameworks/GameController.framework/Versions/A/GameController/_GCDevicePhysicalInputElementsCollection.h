@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}

- (id)elementAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)elementForAlias:(id)a0;

@end
