@interface _HDWorkoutCondenserBufferDatum : NSObject {
    unsigned char _UUIDBytes[16];
    char _isSeries;
    double _startTime;
    double _endTime;
    double _value;
}

- (id)description;
- (id)init;

@end
