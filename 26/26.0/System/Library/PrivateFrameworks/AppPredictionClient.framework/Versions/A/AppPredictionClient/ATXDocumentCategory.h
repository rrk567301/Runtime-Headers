@class NSArray;

@interface ATXDocumentCategory : NSObject

@property (readonly, nonatomic) unsigned long long categoryID;
@property (readonly, nonatomic) NSArray *documentURLs;

+ (id)localizedStringForCategoryID:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCategoryID:(unsigned long long)a0 documentURLs:(id)a1;

@end
