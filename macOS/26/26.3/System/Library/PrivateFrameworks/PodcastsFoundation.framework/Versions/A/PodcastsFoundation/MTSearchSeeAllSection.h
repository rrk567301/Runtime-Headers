@class NSString;

@interface MTSearchSeeAllSection : NSObject {
    void /* function */ nextPage;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSString *nextPage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentType:(long long)a0 nextPage:(id)a1;

@end
