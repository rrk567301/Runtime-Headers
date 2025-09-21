@class NSArray;

@interface MEMailAppExtensionObserverCriteria : NSObject

@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) char includeDisabled;

- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0 includeDisabled:(char)a1;

@end
