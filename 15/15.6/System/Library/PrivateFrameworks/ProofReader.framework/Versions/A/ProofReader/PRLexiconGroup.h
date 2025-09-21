@class NSString, NSArray;

@interface PRLexiconGroup : NSObject

@property (readonly, copy) NSString *localization;
@property (readonly, copy) NSArray *lexicons;
@property (readonly) char cachedOnly;

- (void)dealloc;
- (id)description;
- (id)initWithLocalization:(id)a0 lexicons:(id)a1 cachedOnly:(char)a2;

@end
