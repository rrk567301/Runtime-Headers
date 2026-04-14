@class NSDictionary;

@interface CKItemLookupResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) unsigned long long responseCount;
@property (readonly, nonatomic) NSDictionary *resultDictionary;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)responseCount;
- (id)resultDictionary;

@end
