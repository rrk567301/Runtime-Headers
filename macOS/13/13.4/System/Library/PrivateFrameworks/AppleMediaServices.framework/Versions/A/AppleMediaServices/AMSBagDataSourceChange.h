@class NSString, NSDictionary, NSDate;

@interface AMSBagDataSourceChange : NSObject

@property (readonly) NSString *accountIdentifier;
@property (readonly) NSString *loadedBagIdentifier;
@property (readonly) NSString *loadedBagPartialIdentifier;
@property (readonly) NSDictionary *originalData;
@property (readonly) NSDate *originalExpirationDate;
@property (readonly) NSString *profile;
@property (readonly) NSString *profileVersion;
@property (readonly) NSDictionary *updatedData;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 originalData:(id)a2 originalExpirationDate:(id)a3 updatedData:(id)a4 loadedBagIdentifier:(id)a5 loadedBagPartialIdentifier:(id)a6 accountIdentifier:(id)a7;

@end
