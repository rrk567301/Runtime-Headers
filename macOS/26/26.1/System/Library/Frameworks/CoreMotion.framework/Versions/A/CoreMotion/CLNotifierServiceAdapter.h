@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol> {
    struct map<unsigned long, int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, int>>> { struct __tree<std::__value_type<unsigned long, int>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, int>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, int>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _clients;
}

@property (readonly, nonatomic) struct CLNotifierBase { void /* function */ **x0; } *notifier;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id).cxx_construct;
- (int)notifierClientNumForCoparty:(id)a0;
- (void)unregister:(byref id)a0 forNotification:(int)a1;
- (void).cxx_destruct;
- (void)forget:(byref id)a0;
- (void)register:(byref id)a0 forNotification:(int)a1 registrationInfo:(id)a2;
- (void)setAdaptedNotifier:(struct CLNotifierBase { void /* function */ **x0; } *)a0;
- (id)init;

@end
