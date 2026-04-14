@class NSString;

@interface NSServiceRestrictionListEntry : NSObject

@property (readonly) NSString *bundleID;
@property (readonly) NSString *title;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)dealloc;
- (id)initWithBundleID:(id)a0 title:(id)a1;

@end
