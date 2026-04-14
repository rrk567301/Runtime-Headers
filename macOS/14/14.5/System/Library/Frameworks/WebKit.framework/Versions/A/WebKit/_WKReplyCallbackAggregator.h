@interface _WKReplyCallbackAggregator : NSObject {
    struct RefPtr<WTF::EagerCallbackAggregator<void (id)>, WTF::RawPtrTraits<WTF::EagerCallbackAggregator<void (id)>>, WTF::DefaultRefDerefTraits<WTF::EagerCallbackAggregator<void (id)>>> { void *m_ptr; } _aggregator;
}

@property (readonly, nonatomic) void *aggregator;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithAggregator:(void *)a0;

@end
