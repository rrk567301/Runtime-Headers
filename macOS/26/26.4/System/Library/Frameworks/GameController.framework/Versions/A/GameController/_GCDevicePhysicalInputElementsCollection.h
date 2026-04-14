@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}

- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)count;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)elementAtIndex:(unsigned long long)a0;
- (id)elementForAlias:(id)a0;

@end
