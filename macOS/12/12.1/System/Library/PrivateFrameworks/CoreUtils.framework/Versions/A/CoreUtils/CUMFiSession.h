@class NSString, EAAccessory, NSObject;
@protocol OS_dispatch_queue;

@interface CUMFiSession : NSObject <NSStreamDelegate> {
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) EAAccessory *device;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *protocolString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)_activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)activate;
- (void)_handleError:(id)a0;
- (void)readMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)writeData:(id)a0 completion:(id /* block */)a1;

@end
