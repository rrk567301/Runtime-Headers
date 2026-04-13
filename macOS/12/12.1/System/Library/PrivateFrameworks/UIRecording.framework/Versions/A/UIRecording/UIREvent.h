@class NSString, NSMutableDictionary;

@interface UIREvent : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *properties;
    struct __CGEvent { } *_cgEvent;
    NSString *_processName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)processName;
- (void)setProcessName:(id)a0;
- (id)properties;
- (void)setProperties:(id)a0;
- (unsigned int)cgType;
- (struct __CGEvent { } *)cgEvent;
- (BOOL)isUIREvent__;
- (double)timeIntervalSinceStartup;
- (BOOL)needsProcessToGenerateCGEvent;
- (struct __CGEvent { } *)cgEventToPostToProcess:(id)a0 withLastEvent:(id)a1 withLastCGEvent:(struct __CGEvent { } *)a2 error:(id *)a3;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0 withProcess:(id)a1;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0;
- (unsigned long long)cgFlags;
- (id)unicodeString;
- (BOOL)isKeyDownEvent;
- (BOOL)isKeyUpEvent;
- (BOOL)isShiftKeyDown;
- (BOOL)isMouseDownEvent;
- (BOOL)isMouseUpEvent;

@end
