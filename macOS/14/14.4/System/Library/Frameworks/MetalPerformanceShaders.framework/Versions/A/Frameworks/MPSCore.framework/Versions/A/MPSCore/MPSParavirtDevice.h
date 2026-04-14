@interface MPSParavirtDevice : NSObject {
    long long _gpuFamily;
}

- (id)initWithDevice:(id)a0;
- (BOOL)supportsFamily:(long long)a0;

@end
