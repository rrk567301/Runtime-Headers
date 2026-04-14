@class NSUUID, NSMutableArray, NSObject;
@protocol OS_dispatch_source, QLDataGenerationHandler;

@interface QLRequestSession : NSObject {
    const void *_documentObject;
}

@property BOOL isValid;
@property (nonatomic) void *mangledID;
@property struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *request;
@property (readonly) struct { long long version; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *equal; } callbacks;
@property unsigned int reply_port;
@property (readonly) NSUUID *uuid;
@property (retain) NSObject<OS_dispatch_source> *portDeathSource;
@property (retain) id<QLDataGenerationHandler> dataHandler;
@property (retain) NSMutableArray *storedData;
@property BOOL keepAlive;

+ (BOOL)setupSession:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0;
+ (void)disableInstantOff;
+ (void)enableInstantOff;
+ (void)_updateCrashReportMessage;
+ (id)getSessionFromReplyPort:(unsigned int)a0;
+ (void)unsetupSession:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0;
+ (void)setupCrashReportMessageForRequest:(struct __QLRequest { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; id x1; unsigned int x2; struct { unsigned int x0[8]; } x3; struct __CFURL *x4; struct __CFURL *x5; struct __CFURL *x6; void *x7; struct __CFString *x8; struct __CFDictionary *x9; struct __CFString *x10; struct __CFString *x11; unsigned char x12; struct __QLGenerator *x13; struct __CFDictionary *x14; struct CGContext *x15; void /* function */ *x16; void *x17; struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } x18; unsigned long long x19; unsigned char x20; unsigned char x21; unsigned char x22; unsigned char x23; unsigned char x24; unsigned char x25; unsigned char x26; unsigned char x27; } *)a0;
+ (id)sessionFromUUID:(id)a0;
+ (id)getSessionAndNotifyPortDeathWithPort:(unsigned int)a0;
+ (unsigned long long)sessionCount;
+ (void)discardAllSessions:(BOOL)a0;
+ (BOOL)isInstantOffEnabled;
+ (void)setupSessions:(BOOL)a0 deadPortBlock:(id /* block */)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setDocumentObject:(const void *)a0 callbacks:(const struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;
- (void)handleSendDataWithAttachmentURL:(id)a0 lastChunk:(BOOL)a1;
- (void)handleStartAttachment:(id)a0 mimeType:(id)a1 encoding:(id)a2;
- (id)initWithReplyPort:(unsigned int)a0 uuid:(id)a1;
- (void)handleGetData:(id)a0;

@end
