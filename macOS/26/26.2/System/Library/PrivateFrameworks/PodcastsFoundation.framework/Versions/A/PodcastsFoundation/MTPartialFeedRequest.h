@class NSArray;

@interface MTPartialFeedRequest : MTBaseFeedRequest {
    void /* function */ sections;
}

@property (nonatomic) long long limit;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic) BOOL showTypeIsSerial;

- (void).cxx_destruct;
- (id)initWithStoreID:(long long)a0;

@end
