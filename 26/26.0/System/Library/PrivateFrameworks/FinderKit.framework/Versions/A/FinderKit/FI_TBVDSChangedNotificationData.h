@interface FI_TBVDSChangedNotificationData : NSObject {
    struct vector<std::unordered_map<TFENode, TBVDSChangedPayload>, std::allocator<std::unordered_map<TFENode, TBVDSChangedPayload>>> { void *__begin_; void *__end_; void *__cap_; } _dataSourceChangedList;
}

- (void)clear;
- (BOOL)isEmpty;
- (id).cxx_construct;
- (unsigned long long)size;
- (void).cxx_destruct;
- (const void *)dataSourceChangedList;
- (void *)mutableDataSourceChangedList;

@end
