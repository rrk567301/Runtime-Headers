@class NSData, NSString;

@interface EKUIFileItem : NSObject

@property (copy) NSData *bookmark;
@property (copy) NSString *displayName;

+ (id)itemFromPlistRepresentation:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (id)initWithBookmark:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)plistRepresentation;
- (id)url;
- (void)syncDisplayName;

@end
