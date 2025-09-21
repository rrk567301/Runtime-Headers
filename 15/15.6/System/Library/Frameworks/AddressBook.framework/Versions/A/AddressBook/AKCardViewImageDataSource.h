@class CNContactStore, ABCardViewImage;

@interface AKCardViewImageDataSource : NSObject

@property (retain, nonatomic) ABCardViewImage *updatedImage;
@property (retain, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)makeSetImageCommandWithPeople:(id)a0 image:(id)a1 shouldSave:(char)a2 ignoresGuardianRestrictions:(char)a3;

@end
