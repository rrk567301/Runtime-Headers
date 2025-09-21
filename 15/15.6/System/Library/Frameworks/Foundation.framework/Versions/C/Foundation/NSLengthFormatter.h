@class NSString, NSNumberFormatter, NSUnitFormatter;

@interface NSLengthFormatter : NSFormatter <NSObservable, NSObserver> {
    NSUnitFormatter *_unitFormatter;
    char _isForPersonHeight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSNumberFormatter *numberFormatter;
@property long long unitStyle;
@property (getter=isForPersonHeightUse) char forPersonHeightUse;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (char)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (void)receiveObservedValue:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (id)stringFromMeters:(double)a0;
- (id)stringFromValue:(double)a0 unit:(long long)a1;
- (long long)targetUnitFromMeters:(double)a0;
- (id)unitStringFromMeters:(double)a0 usedUnit:(long long *)a1;
- (id)unitStringFromValue:(double)a0 unit:(long long)a1;

@end
