@class NSString;

@interface MTSearchSeeAllSection : NSObject {
    void /* function */ nextPage;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) NSString *nextPage;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContentType:(long long)a0 nextPage:(id)a1;

@end
