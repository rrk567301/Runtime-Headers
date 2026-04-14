@class BKSHIDEventDispatchingTarget, NSString, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeferringResolution : NSObject <BSDescriptionStreaming, NSMutableCopying, NSSecureCoding, BKSHIDEventBaseAttributeSubsetProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *processRecord;
@property (readonly, nonatomic) unsigned int connectionID;
@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, nonatomic) long long versionedPID;
@property (readonly, nonatomic) BOOL isBuffer;
@property (readonly, nonatomic) BKSHIDEventDispatchingTarget *dispatchingTarget;
@property (readonly, copy, nonatomic) NSString *processDescription;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)build:(id /* block */)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)modifiedResolution:(id /* block */)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
