@class NSString;

@interface CoreSuggestionsUI.SGRealtimeWalletOrderExtractionError : NSObject <SGRealtimeSuggestion_Private> {
    void /* function */ messageID;
}

@property (nonatomic, copy) NSString *messageID;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic) int extractionSource;

- (id)init;
- (void).cxx_destruct;

@end
