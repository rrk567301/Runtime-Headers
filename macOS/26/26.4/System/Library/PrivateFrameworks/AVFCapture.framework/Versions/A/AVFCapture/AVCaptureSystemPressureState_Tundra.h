@class NSString, AVCaptureSystemPressureStateInternal_Tundra;

@interface AVCaptureSystemPressureState_Tundra : NSObject {
    AVCaptureSystemPressureStateInternal_Tundra *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void)dealloc;
- (id)initWithLevel:(id)a0 factors:(unsigned long long)a1;

@end
