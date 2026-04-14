@interface LSSSampleBuffer : NSObject {
    struct { double time; double intensity; void /* unknown type, empty encoding */ direction; struct { void /* unknown type, empty encoding */ vector; } referenceOrientation; BOOL expectPause; } _samples[32];
    unsigned long long _front;
    unsigned long long _back;
}

- (id)init;

@end
