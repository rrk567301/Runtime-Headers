@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (float)floatValue;
- (int)intValue;
- (id)directoryValue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)description;
- (double)doubleValue;
- (id)binaryValue;
- (id)stringValue;
- (long long)longValue;
- (id)initWithLevel:(id)a0;
- (BOOL)booleanValue;
- (id)init;
- (id)fileValue;

@end
