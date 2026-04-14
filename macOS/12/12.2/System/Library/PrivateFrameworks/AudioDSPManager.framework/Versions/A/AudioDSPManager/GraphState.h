@class ADNotificationBusStation;

@interface GraphState : NSObject <NSSecureCoding> {
    struct unique_ptr<adm::graph::Graph, std::default_delete<adm::graph::Graph>> { struct __compressed_pair<adm::graph::Graph *, std::default_delete<adm::graph::Graph>> { struct Graph *__value_; } __ptr_; } mADMGraph;
    ADNotificationBusStation *mNotificationBusStation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void *admGraph;
@property (readonly, nonatomic) ADNotificationBusStation *busStation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithGraph:(struct unique_ptr<adm::graph::Graph, std::default_delete<adm::graph::Graph>> { struct __compressed_pair<adm::graph::Graph *, std::default_delete<adm::graph::Graph>> { struct Graph *x0; } x0; })a0 busStation:(id)a1;

@end
