@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DNDAuxiliaryStateService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_clientIdentifier;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)a0;
- (char)setScreenIsShared:(char)a0 screenIsMirrored:(char)a1 error:(id *)a2;

@end
