@interface FI_TBVDSChangedNotificationData : NSObject {
    struct vector<std::unordered_map<TFENode, TBVDSChangedPayload>, std::allocator<std::unordered_map<TFENode, TBVDSChangedPayload>>> { void *__begin_; void *__end_; struct __compressed_pair<std::unordered_map<TFENode, TBVDSChangedPayload> *, std::allocator<std::unordered_map<TFENode, TBVDSChangedPayload>>> { void *__value_; } __end_cap_; } _dataSourceChangedList;
}

- (unsigned long long)size;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clear;
- (const void *)dataSourceChangedList;
- (void *)mutableDataSourceChangedList;

@end
