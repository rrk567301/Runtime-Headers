@interface BKEvent : NSObject

@property (readonly) unsigned char cls;
@property (readonly) unsigned int event;
@property (readonly) BOOL isStart;
@property (readonly) BOOL isTerminal;
@property (readonly) BOOL isMetadata;
@property (readonly) BOOL isSmartKeyboard;
@property (readonly) BOOL isHigh;
@property (readonly) BOOL isLow;

- (void)encodeEventValue:(unsigned int *)a0 secondValue:(unsigned int *)a1;
- (void)setProperties;
- (id)initWithEventOrCode:(unsigned long long)a0;
- (id)initWithEncodedEventOrCode:(unsigned int)a0;
- (id)description;

@end
