@class CKContainerOptions;

@interface CKDAppContainerAccountMetadata : NSObject

@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (nonatomic) long long tokenRegistered;

- (id)initWithContainerOptions:(id)a0 tokenRegistered:(long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
