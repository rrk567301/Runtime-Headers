@class _GCDevicePhysicalInput, _GCDevicePhysicalInputChangedElementsEnumerator;

@interface _GCDevicePhysicalInputTransaction : _GCDevicePhysicalInputBase {
    _GCDevicePhysicalInput *_physicalInput;
    unsigned long long _lastEventHostTimestamp;
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;
    BOOL _updateContextsValid;
}

- (BOOL)isSnapshot;
- (BOOL)allowsWeakReference;
- (id)description;
- (void)dealloc;
- (unsigned long long)lastEventHostTimestamp;
- (id)physicalInput;

@end
