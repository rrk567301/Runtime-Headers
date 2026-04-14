@class NSData, NSString;

@interface EKUIFileItem : NSObject

@property (copy) NSData *bookmark;
@property (copy) NSString *displayName;

+ (id)itemFromPlistRepresentation:(id)a0;

- (id)description;
- (id)plistRepresentation;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)url;
- (id)initWithBookmark:(id)a0;
- (void)syncDisplayName;

@end
