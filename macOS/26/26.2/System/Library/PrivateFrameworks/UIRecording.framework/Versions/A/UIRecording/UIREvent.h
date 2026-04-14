@class NSString, NSMutableDictionary;

@interface UIREvent : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *properties;
    struct __CGEvent { } *_cgEvent;
    NSString *_processName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setProperties:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)properties;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)processName;
- (id)description;
- (void)setProcessName:(id)a0;
- (void)dealloc;
- (unsigned int)cgType;
- (struct __CGEvent { } *)cgEvent;
- (BOOL)isShiftKeyDown;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0;
- (unsigned long long)cgFlags;
- (struct __CGEvent { } *)cgEventToPostToProcess:(id)a0 withLastEvent:(id)a1 withLastCGEvent:(struct __CGEvent { } *)a2 error:(id *)a3;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0 withProcess:(id)a1;
- (BOOL)isKeyDownEvent;
- (BOOL)isKeyUpEvent;
- (BOOL)isMouseDownEvent;
- (BOOL)isMouseUpEvent;
- (BOOL)isUIREvent__;
- (BOOL)needsProcessToGenerateCGEvent;
- (double)timeIntervalSinceStartup;
- (id)unicodeString;

@end
