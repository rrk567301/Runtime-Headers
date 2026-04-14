@class NSString;

@interface NSServiceRestrictionListEntry : NSObject

@property (readonly) NSString *bundleID;
@property (readonly) NSString *title;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)a0 title:(id)a1;

@end
