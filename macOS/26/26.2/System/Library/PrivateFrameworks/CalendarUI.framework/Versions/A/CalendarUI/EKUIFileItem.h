@class NSData, NSString;

@interface EKUIFileItem : NSObject

@property (copy) NSData *bookmark;
@property (copy) NSString *displayName;

+ (id)itemFromPlistRepresentation:(id)a0;

- (id)title;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)url;
- (id)initWithBookmark:(id)a0;
- (id)plistRepresentation;
- (void)syncDisplayName;

@end
