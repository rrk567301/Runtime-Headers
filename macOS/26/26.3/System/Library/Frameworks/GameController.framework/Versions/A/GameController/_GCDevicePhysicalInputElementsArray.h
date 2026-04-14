@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsArray : NSArray {
    _GCDevicePhysicalInputBase *_implementation;
}

- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)allowsWeakReference;
- (id)objectAtIndex:(unsigned long long)a0;
- (oneway void)release;

@end
