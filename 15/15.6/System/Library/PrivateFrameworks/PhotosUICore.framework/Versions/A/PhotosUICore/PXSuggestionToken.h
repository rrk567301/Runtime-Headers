@interface PXSuggestionToken : NSObject

@property (nonatomic) unsigned long long token;
@property (readonly, nonatomic) char canceled;

- (id)init;
- (void)cancel;

@end
