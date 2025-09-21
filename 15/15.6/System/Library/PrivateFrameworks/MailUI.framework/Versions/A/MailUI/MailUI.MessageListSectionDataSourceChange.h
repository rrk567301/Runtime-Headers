@class NSString;

@interface MailUI.MessageListSectionDataSourceChange : NSObject <EFPubliclyDescribable> {
    void /* unknown type, empty encoding */ change;
}

@property (nonatomic, readonly) NSString *ef_publicDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) char isAddition;
@property (nonatomic, readonly) char isRemoval;
@property (nonatomic, readonly) char isMove;
@property (nonatomic, readonly) char isUpdate;
@property (nonatomic, readonly) char skipped;
@property (nonatomic, readonly) char failed;
@property (nonatomic, readonly) char isFirstChange;
@property (nonatomic, readonly) char isSectionRemoval;
@property (nonatomic, readonly) char isCleanSnapshot;
@property (nonatomic, readonly) char hasChanges;
@property (nonatomic, readonly) long long numberOfChanges;

+ (id)failed;
+ (id)removed:(long long)a0;
+ (id)updated:(long long)a0;
+ (id)skipped;
+ (id)added:(long long)a0 isFirstChange:(char)a1;
+ (id)cleanSnapshot;
+ (id)moved:(long long)a0;
+ (id)sectionRemovedWithSection:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
