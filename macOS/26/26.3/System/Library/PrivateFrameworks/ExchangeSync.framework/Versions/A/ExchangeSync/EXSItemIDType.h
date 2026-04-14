@class NSString;

@interface EXSItemIDType : NSObject

@property (copy) NSString *itemID;
@property (copy) NSString *changeKey;

+ (id)initWithPropertiesDictionary:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)deriveJSONrepresentation;

@end
