@class NSString, NSArray;

@interface FCConfigHyperlinkText : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *links;

- (id)initWithText:(id)a0 links:(id)a1;
- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
