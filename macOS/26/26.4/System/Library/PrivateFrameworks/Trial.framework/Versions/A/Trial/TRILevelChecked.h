@class TRILevel;

@interface TRILevelChecked : NSObject {
    TRILevel *_wrapped;
}

+ (id)wrapLevel:(id)a0;

- (id)directoryValue;
- (id)stringValue;
- (double)doubleValue;
- (id)initWithLevel:(id)a0;
- (BOOL)booleanValue;
- (int)intValue;
- (long long)longValue;
- (id)fileValue;
- (float)floatValue;
- (id)binaryValue;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)description;

@end
