@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (float)floatValue;
- (id)forwardingTargetForSelector:(SEL)a0;
- (int)intValue;
- (id)fileValue;
- (id)description;
- (double)doubleValue;
- (id)init;
- (id)directoryValue;
- (long long)longValue;
- (void).cxx_destruct;
- (id)stringValue;
- (id)binaryValue;
- (BOOL)booleanValue;
- (id)initWithLevel:(id)a0;

@end
