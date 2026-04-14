@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (id)description;
- (id)init;
- (double)doubleValue;
- (int)intValue;
- (long long)longValue;
- (float)floatValue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (BOOL)booleanValue;
- (id)binaryValue;
- (id)directoryValue;
- (id)initWithLevel:(id)a0;
- (id)fileValue;

@end
