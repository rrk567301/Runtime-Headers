@class CNContactStore, ABCardViewImage;

@interface AKCardViewImageDataSource : NSObject

@property (retain, nonatomic) ABCardViewImage *updatedImage;
@property (retain, nonatomic) CNContactStore *contactStore;

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)makeSetImageCommandWithPeople:(id)a0 image:(id)a1 shouldSave:(BOOL)a2 ignoresGuardianRestrictions:(BOOL)a3;

@end
