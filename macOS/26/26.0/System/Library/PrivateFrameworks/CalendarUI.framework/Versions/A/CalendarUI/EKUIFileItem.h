@class NSData, NSString;

@interface EKUIFileItem : NSObject

@property (copy) NSData *bookmark;
@property (copy) NSString *displayName;

+ (id)itemFromPlistRepresentation:(id)a0;

- (id)plistRepresentation;
- (id)url;
- (id)description;
- (id)title;
- (unsigned long long)hash;
- (id)initWithBookmark:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)syncDisplayName;

@end
