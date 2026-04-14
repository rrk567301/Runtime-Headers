@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsArray : NSArray {
    _GCDevicePhysicalInputBase *_implementation;
}

- (BOOL)allowsWeakReference;
- (id)retain;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (oneway void)release;
- (unsigned long long)retainCount;

@end
