@class NSString, NSMutableDictionary;

@interface UIREvent : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *properties;
    struct __CGEvent { } *_cgEvent;
    NSString *_processName;
}

@property (class, readonly) char supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setProcessName:(id)a0;
- (id)processName;
- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned int)cgType;
- (struct __CGEvent { } *)cgEvent;
- (char)isShiftKeyDown;
- (unsigned long long)cgFlags;
- (struct __CGEvent { } *)cgEventToPostToProcess:(id)a0 withLastEvent:(id)a1 withLastCGEvent:(struct __CGEvent { } *)a2 error:(id *)a3;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0 withProcess:(id)a1;
- (char)isKeyDownEvent;
- (char)isKeyUpEvent;
- (char)isMouseDownEvent;
- (char)isMouseUpEvent;
- (char)isUIREvent__;
- (char)needsProcessToGenerateCGEvent;
- (double)timeIntervalSinceStartup;
- (id)unicodeString;

@end
