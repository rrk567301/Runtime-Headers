@interface MTFullFeedRequest : MTBaseFeedRequest {
    void /* unknown type, empty encoding */ isSerial;
    void /* unknown type, empty encoding */ hasSeasons;
}

- (id)initWithStoreID:(long long)a0;
- (id)initWithStoreID:(long long)a0 isSerial:(char)a1 hasSeasons:(char)a2;

@end
