@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsArray : NSArray {
    _GCDevicePhysicalInputBase *_implementation;
}

- (unsigned long long)count;
- (BOOL)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)objectAtIndex:(unsigned long long)a0;

@end
