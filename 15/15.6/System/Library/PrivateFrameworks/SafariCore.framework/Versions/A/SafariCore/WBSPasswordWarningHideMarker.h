@class NSDictionary;

@interface WBSPasswordWarningHideMarker : NSObject

@property (readonly, nonatomic) unsigned long long issueTypes;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithIssueTypes:(unsigned long long)a0;

@end
