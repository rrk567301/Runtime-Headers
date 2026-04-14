@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (float)floatValue;
- (id)initWithLevel:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)stringValue;
- (id)init;
- (double)doubleValue;
- (id)description;
- (id)directoryValue;
- (int)intValue;
- (long long)longValue;
- (id)binaryValue;
- (BOOL)booleanValue;
- (void).cxx_destruct;
- (id)fileValue;

@end
