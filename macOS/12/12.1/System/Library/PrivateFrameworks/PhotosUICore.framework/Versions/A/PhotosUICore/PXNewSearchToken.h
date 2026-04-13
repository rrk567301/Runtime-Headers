@class NSString, NSImage, PSIQueryToken, NSAttributedString;

@interface PXNewSearchToken : NSObject

@property (readonly, nonatomic) BOOL isPersistable;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic) NSAttributedString *attributedTitle;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) PSIQueryToken *queryToken;
@property (readonly, nonatomic) NSString *priorityAssetUUID;
@property (readonly, nonatomic) BOOL hasLeadingHashtag;

+ (id)px_oneYearAgoSearchToken;
+ (id)px_searchTokenForHashtag:(id)a0;
+ (id)unnamedPersonDisplayText;
+ (unsigned long long)_searchUserCategoryForSearchTokenCategory:(unsigned long long)a0;
+ (id)socialGroupDisplayText;
+ (id)px_searchTokensFromSiriSearchRequest:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqualToToken:(id)a0;
- (id)initWithAttributedTitle:(id)a0 queryToken:(id)a1 type:(unsigned long long)a2 priorityAssetUUID:(id)a3;
- (id)initWithTitle:(id)a0 queryToken:(id)a1 type:(unsigned long long)a2 priorityAssetUUID:(id)a3;
- (id)initWithSearchText:(id)a0 searchCategory:(unsigned long long)a1;
- (BOOL)isUnnamedPerson;
- (BOOL)isSocialGroup;
- (id)_iconForSearchUserCategory:(unsigned long long)a0;
- (id)_imagewithSymbolName:(id)a0;

@end
