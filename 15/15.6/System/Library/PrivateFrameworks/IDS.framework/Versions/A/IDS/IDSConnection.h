@class IDSAccount, _IDSConnection;

@interface IDSConnection : NSObject {
    _IDSConnection *_internal;
}

@property (readonly, nonatomic) _IDSConnection *_internal;
@property (readonly, nonatomic) IDSAccount *account;
@property (readonly, nonatomic) char isActive;

+ (id)_connectionWithAccount:(id)a0 commands:(id)a1 indirectDelegateCallouts:(char)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (char)sendMessage:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (id)_initWithAccount:(id)a0 commands:(id)a1 indirectDelegateCallouts:(char)a2;
- (id)initWithAccount:(id)a0 commands:(id)a1;
- (char)sendData:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;
- (char)sendMessage:(id)a0 toDestinations:(id)a1 options:(id)a2 identifier:(id *)a3 error:(id *)a4;
- (char)sendProtobuf:(id)a0 toDestinations:(id)a1 priority:(long long)a2 options:(id)a3 identifier:(id *)a4 error:(id *)a5;

@end
