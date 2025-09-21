@class NSArray, NSString;

@interface LiveSpeechCategory : NSObject {
    void /* unknown type, empty encoding */ categoryID;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ symbol;
}

@property (class, nonatomic, readonly) NSArray *categories;

@property (nonatomic, copy) NSString *categoryID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *symbol;
@property (nonatomic, readonly) char isSaved;
@property (nonatomic, readonly) char isRecents;
@property (nonatomic, readonly) NSString *localizedName;

+ (void)deleteCategoryWithID:(id)a0;
+ (id)makeEmptyCategory;
+ (void)deleteCategory:(id)a0;
+ (id)addCategoryWithName:(id)a0 symbol:(id)a1 error:(id *)a2;
+ (id)observeChanges:(id /* block */)a0;
+ (void)addSystemCategoriesIfNeeded;
+ (id)categoryForID:(id)a0;
+ (char)renameCategoryWithID:(id)a0 name:(id)a1 error:(id *)a2;
+ (char)updateCategorySymbolWithID:(id)a0 symbol:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)phrases;
- (char)addPhrase:(id)a0 inputID:(id)a1 error:(id *)a2;
- (char)deletePhrase:(id)a0 error:(id *)a1;

@end
