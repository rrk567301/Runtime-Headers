@class NSString, AVCaptureSystemPressureStateInternal_Tundra;

@interface AVCaptureSystemPressureState_Tundra : NSObject {
    AVCaptureSystemPressureStateInternal_Tundra *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)initWithLevel:(id)a0 factors:(unsigned long long)a1;

@end
