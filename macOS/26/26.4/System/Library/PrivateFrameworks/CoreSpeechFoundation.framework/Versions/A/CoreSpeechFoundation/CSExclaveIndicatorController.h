@interface CSExclaveIndicatorController : NSObject {
    void *_mem;
    unsigned int _sensor_port;
    unsigned int _buffer_port;
    BOOL _hasStarted;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)_getCSFSensorStatusWithExclaveSensorStatus:(unsigned int)a0;
- (void *)copyBufferWithSize:(unsigned int)a0;
- (unsigned long long)fetchCurrentSensorStatus;
- (unsigned long long)sensorStart;
- (unsigned long long)sensorStop;

@end
