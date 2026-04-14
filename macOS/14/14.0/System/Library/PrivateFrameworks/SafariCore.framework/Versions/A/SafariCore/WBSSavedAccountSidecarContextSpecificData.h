@class NSDictionary, NSDate;

@interface WBSSavedAccountSidecarContextSpecificData : NSObject {
    NSDictionary *_originalKeychainDictionary;
}

@property (copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithLastUsedDate:(id)a0;

@end
