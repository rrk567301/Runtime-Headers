@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding> {
    char _ascending;
    NSString *_name;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) char ascending;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 ascending:(char)a1;

@end
