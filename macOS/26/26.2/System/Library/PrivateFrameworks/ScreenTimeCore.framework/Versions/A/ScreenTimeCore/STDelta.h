@class NSDictionary, NSString;

@interface STDelta : NSObject

@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) long long changeType;

- (id)initWithUniqueIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)deleted;
- (void)changedWithDictionary:(id)a0;

@end
