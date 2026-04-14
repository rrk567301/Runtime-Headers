@class CNContactPickerScope;

@interface CNContactListHelperFactory : NSObject

@property (readonly, nonatomic) CNContactPickerScope *scope;

- (void).cxx_destruct;
- (id)selectHelper:(id)a0;
- (id)selectValueHelper:(id)a0;
- (id)initWithPickerScope:(id)a0;
- (id)showSelectedContactHelper:(id)a0;
- (id)selectContactHelper:(id)a0;

@end
