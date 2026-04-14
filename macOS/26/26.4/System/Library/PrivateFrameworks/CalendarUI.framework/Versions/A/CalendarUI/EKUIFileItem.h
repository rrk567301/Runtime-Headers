@class NSData, NSString;

@interface EKUIFileItem : NSObject

@property (copy) NSData *bookmark;
@property (copy) NSString *displayName;

+ (id)itemFromPlistRepresentation:(id)a0;

- (id)plistRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithBookmark:(id)a0;
- (id)description;
- (id)url;
- (void)syncDisplayName;

@end
