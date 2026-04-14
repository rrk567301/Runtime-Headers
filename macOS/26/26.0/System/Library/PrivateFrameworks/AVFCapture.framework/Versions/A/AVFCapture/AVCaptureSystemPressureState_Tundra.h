@class NSString, AVCaptureSystemPressureStateInternal_Tundra;

@interface AVCaptureSystemPressureState_Tundra : NSObject {
    AVCaptureSystemPressureStateInternal_Tundra *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithLevel:(id)a0 factors:(unsigned long long)a1;

@end
