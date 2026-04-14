@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (double)doubleValue;
- (int)intValue;
- (id)stringValue;
- (id)binaryValue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)booleanValue;
- (long long)longValue;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLevel:(id)a0;
- (float)floatValue;
- (id)directoryValue;
- (id)init;
- (id)fileValue;

@end
