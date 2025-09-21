@class NSString, PCConnectionManager;

@interface KeepAliveManager : NSObject <PCConnectionManagerDelegate> {
    PCConnectionManager *_manager;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } _keepAliveId;
    struct weak_ptr<ImsKeepAliveDelegate> { struct ImsKeepAliveDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } _delegate;
    struct shared_ptr<WakeOnWifiAssertion> { struct WakeOnWifiAssertion *__ptr_; struct __shared_weak_count *__cntrl_; } _wowAssertion;
    BOOL _enableWakeUpOnWifi;
    BOOL _keepAliveStarted;
    struct dispatch_queue_s { } *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)connectionManager:(id)a0 handleEvent:(int)a1;
- (BOOL)isNextKeepAliveWithinThreshold:(double)a0;
- (void)growKeepAliveInterval;
- (id)initWithIdentifier:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })a0 minInterval:(double)a1 maxInterval:(double)a2 enableWakeUp:(BOOL)a3 delegate:(struct weak_ptr<ImsKeepAliveDelegate> { struct ImsKeepAliveDelegate *x0; struct __shared_weak_count *x1; })a4;
- (void)shrinkKeepAliveInterval;
- (void)startKeepAlive;
- (void)startWakeUpOnWifi;
- (void)stopKeepAlive;
- (void)stopWakeUpOnWifi;

@end
