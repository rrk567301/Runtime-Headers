@interface CMSensorRecorder : NSObject

+ (long long)authorizationStatus;
+ (char)isAccelerometerRecordingAvailable;
+ (char)isAuthorizedForRecording;
+ (char)isGyroRecordingAvailable;
+ (char)isPressureRecordingAvailable;
+ (char)isRecordingAvailableForType:(int)a0;

- (void)recordAccelerometerForDuration:(double)a0;
- (id)accelerometerDataFrom:(id)a0 to:(id)a1;
- (id)accelerometerDataFromDate:(id)a0 toDate:(id)a1;
- (id)accelerometerDataSince:(unsigned long long)a0;
- (id)accelerometerDataSinceId:(unsigned long long)a0;
- (id)gyroDataFromDate:(id)a0 toDate:(id)a1;
- (id)gyroDataSinceId:(unsigned long long)a0;
- (id)pressureDataFromDate:(id)a0 toDate:(id)a1;
- (id)pressureDataSinceId:(unsigned long long)a0;
- (void)recordAccelerometerFor:(double)a0;
- (void)recordDataType:(int)a0 forDuration:(double)a1;
- (void)recordGyroForDuration:(double)a0;
- (void)recordPressureForDuration:(double)a0;
- (char)sendAccelDataToUrl:(id)a0 fromDate:(id)a1 toDate:(id)a2;
- (char)sendGyroDataToUrl:(id)a0 fromDate:(id)a1 toDate:(id)a2;
- (char)sendPressureDataToUrl:(id)a0 fromDate:(id)a1 toDate:(id)a2;
- (char)sendSensorDataToUrl:(id)a0 fromDate:(id)a1 toDate:(id)a2 forType:(int)a3;
- (id)sensorDataFromDate:(id)a0 toDate:(id)a1 forType:(int)a2;
- (char)setAccelSampleRate:(unsigned int)a0;
- (char)setGyroSampleRate:(unsigned int)a0;
- (char)setPressureSampleRate:(unsigned int)a0;
- (char)setSensorSampleRate:(unsigned int)a0 forType:(int)a1;
- (char)validateTimesFromDate:(id *)a0 toDate:(id)a1;

@end
