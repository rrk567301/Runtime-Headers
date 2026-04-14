@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}

- (id)retain;
- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)elementAtIndex:(unsigned long long)a0;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)elementForAlias:(id)a0;

@end
