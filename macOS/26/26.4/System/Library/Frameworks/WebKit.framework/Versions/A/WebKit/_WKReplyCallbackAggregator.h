@interface _WKReplyCallbackAggregator : NSObject {
    struct RefPtr<WTF::EagerCallbackAggregator<void (id, WebKit::IsDefaultReply)>, WTF::RawPtrTraits<WTF::EagerCallbackAggregator<void (id, WebKit::IsDefaultReply)>>, WTF::DefaultRefDerefTraits<WTF::EagerCallbackAggregator<void (id, WebKit::IsDefaultReply)>>> { void *m_ptr; } _aggregator;
}

@property (readonly, nonatomic) void *aggregator;

- (void).cxx_destruct;
- (id)initWithAggregator:(void *)a0;
- (id).cxx_construct;

@end
