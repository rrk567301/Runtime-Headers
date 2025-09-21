@class NSArray, NSString;

@interface MUVendorLinkSortParameters : NSObject

@property (copy, nonatomic) NSArray *preferredOrdering;
@property (copy, nonatomic) NSString *winningAdamId;
@property (nonatomic) char sortAlphabetically;

- (void).cxx_destruct;

@end
