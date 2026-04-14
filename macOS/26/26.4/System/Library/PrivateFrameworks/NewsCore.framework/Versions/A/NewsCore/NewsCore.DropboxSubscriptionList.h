@class NSArray, NSSet;

@interface NewsCore.DropboxSubscriptionList : NSObject <FCSubscriptionListType> {
    void /* unknown type, empty encoding */ todayDropbox;
    void /* unknown type, empty encoding */ lazyDropboxData;
}

@property (nonatomic, readonly) NSArray *rankedAllSubscribedTagIDs;
@property (nonatomic, readonly) NSSet *autoFavoriteTagIDs;
@property (nonatomic, readonly) NSSet *mutedTagIDs;

- (void).cxx_destruct;
- (id)init;

@end
