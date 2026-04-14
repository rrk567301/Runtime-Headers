@class AMSURLResult;

@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject

@property (retain, nonatomic) AMSURLResult *result;

- (id)init;
- (void).cxx_destruct;
- (id)_parseTotalFromMetaBag;
- (id)_parseOffsetFromMetaBag;
- (id)parseAMSURLResult:(id)a0;

@end
