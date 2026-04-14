@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject <NSSecureCoding> {
    NSMutableArray *_initialSamples;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)interpolateBetween:(id)a0 withWeight:(float)a1;
- (id)initialSamples;
- (void)setInitialSamples:(id)a0;

@end
