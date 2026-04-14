@class NSString, NSAttributedString;
@protocol EMMessageListItem;

@interface MUIHighlightedMessage : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_sender;
}

@property (nonatomic, readonly) NSAttributedString *topLine;
@property (nonatomic, readonly) id<EMMessageListItem> messageListItem;
@property (nonatomic, readonly) BOOL isGeneratedSummary;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTopLine:(id)a0 isGeneratedSummary:(BOOL)a1 messageListItem:(id)a2;

@end
