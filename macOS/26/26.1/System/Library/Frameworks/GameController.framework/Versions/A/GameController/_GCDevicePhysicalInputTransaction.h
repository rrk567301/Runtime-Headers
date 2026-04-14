@class _GCDevicePhysicalInput, _GCDevicePhysicalInputChangedElementsEnumerator;

@interface _GCDevicePhysicalInputTransaction : _GCDevicePhysicalInputBase {
    _GCDevicePhysicalInput *_physicalInput;
    unsigned long long _lastEventHostTimestamp;
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;
    BOOL _updateContextsValid;
}

- (BOOL)allowsWeakReference;
- (id)description;
- (BOOL)isSnapshot;
- (void)dealloc;
- (unsigned long long)lastEventHostTimestamp;
- (id)physicalInput;

@end
