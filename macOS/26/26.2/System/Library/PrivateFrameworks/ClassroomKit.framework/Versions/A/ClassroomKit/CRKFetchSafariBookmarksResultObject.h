@class NSArray;

@interface CRKFetchSafariBookmarksResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *bookmarks;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
