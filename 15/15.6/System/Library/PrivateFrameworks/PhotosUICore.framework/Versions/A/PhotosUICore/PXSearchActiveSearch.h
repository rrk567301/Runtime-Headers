@class NSString, NSArray;

@interface PXSearchActiveSearch : NSObject

@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSArray *searchTokens;
@property (retain, nonatomic) NSArray *representedObjects;
@property (retain, nonatomic) NSString *priorityAssetUUID;
@property (readonly, nonatomic) char hasSearchText;
@property (readonly, nonatomic) char hasSearchTokens;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) unsigned long long searchTokenCount;
@property (readonly, nonatomic) unsigned long long searchTermCount;
@property (readonly, nonatomic) NSString *searchTermsString;
@property (readonly, nonatomic) unsigned long long libraryScope;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_generateRelatedSearchObjects;
- (id)initWithSearchText:(id)a0 searchTokens:(id)a1 libraryScope:(unsigned long long)a2;

@end
