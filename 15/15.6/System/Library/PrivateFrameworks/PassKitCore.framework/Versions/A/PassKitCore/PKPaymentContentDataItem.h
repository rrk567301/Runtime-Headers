@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPaymentContentItem *contentItem;

+ (long long)dataType;
+ (char)supportsMultipleItems;

- (long long)context;
- (void).cxx_destruct;
- (char)isValidWithError:(id *)a0;
- (id)initWithContentItem:(id)a0;

@end
