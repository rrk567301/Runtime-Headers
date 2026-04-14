@class NSArray, NSString;

@interface MSSearchResultsSectionSnapshot : NSObject {
    void /* function */ title;
}

@property (nonatomic, readonly) NSArray *futures;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFutures:(id)a0 title:(id)a1;

@end
