@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}

- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)allowsWeakReference;
- (id)elementAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (id)elementForAlias:(id)a0;

@end
