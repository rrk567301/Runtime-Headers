@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DNDAuxiliaryStateService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_clientIdentifier;
}

+ (id)serviceForClientIdentifier:(id)a0;
+ (void)initialize;

- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)setScreenIsShared:(BOOL)a0 screenIsMirrored:(BOOL)a1 error:(id *)a2;

@end
