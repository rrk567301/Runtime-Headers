@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKPaymentContentItem *contentItem;

+ (long long)dataType;
+ (BOOL)supportsMultipleItems;

- (long long)context;
- (void).cxx_destruct;
- (id)initWithContentItem:(id)a0;
- (BOOL)isValidWithError:(id *)a0;

@end
