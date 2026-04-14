@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPaymentContentItem *contentItem;

+ (long long)dataType;
+ (BOOL)supportsMultipleItems;

- (void).cxx_destruct;
- (long long)context;
- (BOOL)isValidWithError:(id *)a0;
- (id)initWithContentItem:(id)a0;

@end
