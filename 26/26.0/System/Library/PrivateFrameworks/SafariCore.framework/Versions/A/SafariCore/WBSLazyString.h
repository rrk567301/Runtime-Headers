@class NSString;

@interface WBSLazyString : NSObject {
    id /* block */ _provider;
    NSString *_string;
}

@property (readonly, nonatomic) NSString *string;

- (id)initWithProvider:(id /* block */)a0;
- (void).cxx_destruct;

@end
