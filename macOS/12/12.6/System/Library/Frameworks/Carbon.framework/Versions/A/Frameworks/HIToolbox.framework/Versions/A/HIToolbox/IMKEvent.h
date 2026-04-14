@class NSMutableDictionary;

@interface IMKEvent : NSObject <NSSecureCoding> {
    NSMutableDictionary *_eventDataDictionary;
    unsigned int eventClass;
    unsigned int eventKind;
    unsigned int eventSeqNum;
    double eventTime;
    long long _pointSwapType;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)packageEventRef:(struct OpaqueEventRef { } *)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (unsigned int)eventClass;
- (id)names;
- (void)setEventClass:(unsigned int)a0;
- (void)setEventKind:(unsigned int)a0;
- (void)setEventTime:(double)a0;
- (void)setEventSeqNum:(unsigned int)a0;
- (void)_unpackEventRef:(struct OpaqueEventRef { } *)a0;
- (id)_eventDataDictionary;
- (const void *)bytesForName:(id)a0 size:(unsigned int *)a1;
- (void)addObject:(id)a0 withName:(id)a1 paramType:(unsigned int)a2;
- (void)_getCharacters:(unsigned short *)a0 length:(unsigned long long *)a1 fromKeyTranslation:(struct OpaqueEventRef { } *)a2;
- (void)_getUnmodifiedCharacters:(unsigned short *)a0 length:(unsigned long long *)a1 fromEvent:(struct OpaqueEventRef { } *)a2;
- (void)_unpackMouseEventRef:(struct OpaqueEventRef { } *)a0;
- (void)_unpackKeyboardEventRef:(struct OpaqueEventRef { } *)a0;
- (void)_unpackTextInputEventRef:(struct OpaqueEventRef { } *)a0;
- (void)_unpackTabletEventRef:(struct OpaqueEventRef { } *)a0;
- (unsigned int)eventKind;
- (double)eventTime;
- (unsigned int)eventSeqNum;
- (struct OpaqueEventRef { } *)copyEventRef;
- (void)addData:(const void *)a0 withName:(id)a1 paramType:(unsigned int)a2 size:(unsigned int)a3;
- (void)addNSData:(id)a0 withName:(id)a1 paramType:(unsigned int)a2;
- (id)objectForName:(id)a0;
- (struct CGPoint { double x0; double x1; })convertHIPointDataToNSPoint;
- (id)dataAndNames;

@end
