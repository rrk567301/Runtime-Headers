@class NSString, NSArray, NSDate;

@interface WBSRecentWebSearchEntry : NSObject

@property (readonly) NSString *searchString;
@property (readonly) NSDate *date;
@property (readonly) NSArray *URLStrings;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0 date:(id)a1 URLs:(id)a2;
- (id)initWithSearchString:(id)a0 url:(id)a1;

@end
