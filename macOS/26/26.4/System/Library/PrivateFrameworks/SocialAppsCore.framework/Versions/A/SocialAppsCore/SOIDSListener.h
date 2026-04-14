@class NSString;

@interface SOIDSListener : NSObject {
    long long _listenCount;
}

@property (readonly) NSString *listenerID;

+ (id)sharedListener;

- (void)beginListening;
- (void).cxx_destruct;
- (id)init;
- (void)endListening;
- (long long)queryKnownIDStatusForDestinations:(id)a0 service:(id)a1 completionBlock:(id /* block */)a2;

@end
