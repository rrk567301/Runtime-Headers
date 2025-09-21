@class _GCDevicePhysicalInput, _GCDevicePhysicalInputChangedElementsEnumerator;

@interface _GCDevicePhysicalInputTransaction : _GCDevicePhysicalInputBase {
    _GCDevicePhysicalInput *_physicalInput;
    double _lastEventTimestamp;
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;
    char _updateContextsValid;
}

- (void)dealloc;
- (char)allowsWeakReference;
- (id)description;
- (char)isSnapshot;
- (double)lastEventTimestamp;
- (id)physicalInput;

@end
