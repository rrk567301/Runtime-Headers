@class AMSCB1PBundleInfo, NSObject;
@protocol OS_dispatch_queue;

@interface AMSCB1PBridge : NSObject {
    struct tuple<std::string, std::string> { struct __tuple_impl<std::__tuple_indices<0, 1>, std::string, std::string> { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __value_; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } __value_; } __base_; } _metricsBagProfile;
    struct shared_ptr<AMSCore::IDataProvider> { struct IDataProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _bagStorefrontSuffixDataProvider;
    struct optional<AMSCore::Session> { union { char __null_state_; struct Session { struct shared_ptr<AMSCore::Session::impl> { struct impl *__ptr_; struct __shared_weak_count *__cntrl_; } mImpl; } __val_; } ; BOOL __engaged_; } _session;
    AMSCB1PBundleInfo *_metricsBundleInfo;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
