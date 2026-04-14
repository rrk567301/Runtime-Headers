@class NSString, NSArray;

@interface PKPaymentSetupProductSection : NSObject

@property (copy, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSArray *categories;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
