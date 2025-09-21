@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsArray : NSArray {
    _GCDevicePhysicalInputBase *_implementation;
}

- (oneway void)release;
- (char)allowsWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;

@end
