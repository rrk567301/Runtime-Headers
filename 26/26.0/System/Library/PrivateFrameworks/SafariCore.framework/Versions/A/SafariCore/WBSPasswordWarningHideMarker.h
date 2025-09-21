@class NSDictionary;

@interface WBSPasswordWarningHideMarker : NSObject

@property (readonly, nonatomic) unsigned long long issueTypes;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIssueTypes:(unsigned long long)a0;

@end
