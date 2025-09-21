@class NSString;

@interface AWDigitizerButtonKeyboardAttentionEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long senderID;
@property (readonly, nonatomic) NSString *displayUUID;

- (void)validateMask;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 eventMask:(unsigned long long)a2 digitizerButtonKeyboardMetadata:(struct AWDigitizerButtonKeyboardMetadata { unsigned long long x0; struct __CFString *x1; } *)a3;

@end
