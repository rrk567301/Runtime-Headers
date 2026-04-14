@class NSString, NSArray;

@interface PKPaymentSetupProductSection : NSObject

@property (copy, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSArray *categories;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
