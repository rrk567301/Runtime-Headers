@class NSDictionary, NSMutableDictionary;

@interface _COMessagingServiceMeter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSDictionary *limits;
@property (readonly, nonatomic) NSMutableDictionary *peaks;
@property (readonly, nonatomic) int registration;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (char)clientIdentifier:(id)a0 canSendLength:(unsigned long long)a1;
- (char)clientIdentifier:(id)a0 canReceiveLength:(unsigned long long)a1;
- (char)isEvaluatingIdentifier:(id)a0;
- (unsigned long long)receiveLimitForIdentifier:(id)a0;
- (unsigned long long)sendLimitForIdentifier:(id)a0;

@end
