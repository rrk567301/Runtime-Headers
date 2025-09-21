@class NSMutableArray;

@interface CNHandleStringsClassificationBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;
@property (retain, nonatomic) NSMutableArray *unknown;

- (void)addUnknown:(id)a0;
- (id)init;
- (void)addEmailAddress:(id)a0;
- (void)addPhoneNumber:(id)a0;
- (id)build;
- (void).cxx_destruct;

@end
