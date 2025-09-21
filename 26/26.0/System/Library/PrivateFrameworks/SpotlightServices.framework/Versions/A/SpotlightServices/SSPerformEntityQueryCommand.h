@class NSArray;

@interface SSPerformEntityQueryCommand : SFPerformEntityQueryCommand

@property (nonatomic) BOOL fromSuggestion;
@property (retain, nonatomic) NSArray *searchBarButtonItems;
@property (retain, nonatomic) NSArray *folderScopeURLs;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
