@class NSDictionary;

@interface CKItemLookupResponse : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) unsigned long long responseCount;
@property (readonly, nonatomic) NSDictionary *resultDictionary;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)resultDictionary;
- (unsigned long long)responseCount;

@end
