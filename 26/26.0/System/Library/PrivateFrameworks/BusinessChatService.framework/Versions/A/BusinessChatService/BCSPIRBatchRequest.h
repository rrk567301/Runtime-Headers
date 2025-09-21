@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface BCSPIRBatchRequest : NSObject {
    NSMutableDictionary *_storage;
    NSMutableArray *_invalidIdentifiers;
}

@property (readonly, nonatomic) NSArray *pirKeysToFetch;
@property (readonly, nonatomic) NSDictionary *identifiersByPIRKey;
@property (readonly, nonatomic) NSArray *invalidIdentifiers;

- (id)initWithQuery:(id)a0;
- (void).cxx_destruct;

@end
