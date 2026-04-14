@class NSArray;

@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *bookmarks;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)_appendDescriptionOfBookmark:(id)a0 toString:(id)a1 level:(unsigned long long)a2;
- (id)initWithBookmarks:(id)a0;

@end
