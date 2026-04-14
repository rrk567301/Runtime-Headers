@interface FI_TBVDSChangedNotificationData : NSObject {
    struct vector<std::unordered_map<TFENode, TBVDSChangedPayload>, std::allocator<std::unordered_map<TFENode, TBVDSChangedPayload>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _dataSourceChangedList;
}

- (void)clear;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)size;
- (BOOL)isEmpty;
- (const void *)dataSourceChangedList;
- (void *)mutableDataSourceChangedList;

@end
