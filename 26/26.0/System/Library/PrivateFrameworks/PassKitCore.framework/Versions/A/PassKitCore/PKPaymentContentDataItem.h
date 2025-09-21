@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPaymentContentItem *contentItem;

+ (long long)dataType;
+ (BOOL)supportsMultipleItems;

- (BOOL)isValidWithError:(id *)a0;
- (id)initWithContentItem:(id)a0;
- (long long)context;
- (void).cxx_destruct;

@end
