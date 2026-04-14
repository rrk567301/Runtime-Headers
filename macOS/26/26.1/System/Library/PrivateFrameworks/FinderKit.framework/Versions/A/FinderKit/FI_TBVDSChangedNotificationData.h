@interface FI_TBVDSChangedNotificationData : NSObject {
    struct vector<std::unordered_map<TFENode, TBVDSChangedPayload>, std::allocator<std::unordered_map<TFENode, TBVDSChangedPayload>>> { void *__begin_; void *__end_; void *__cap_; } _dataSourceChangedList;
}

- (void)clear;
- (unsigned long long)size;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (const void *)dataSourceChangedList;
- (void *)mutableDataSourceChangedList;

@end
