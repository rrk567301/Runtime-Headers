@class NSString;

@interface PKPaymentSetupFieldPickerItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;

+ (id)_itemWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;

@end
