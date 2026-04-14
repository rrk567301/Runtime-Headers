@class NSPasteboardItem;

@interface _VZSpiceAgentCorePasteboardItemState : NSObject {
    NSPasteboardItem *_item;
    struct shared_ptr<Base::Threading::Event> { struct Event *__ptr_; struct __shared_weak_count *__cntrl_; } _event;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
