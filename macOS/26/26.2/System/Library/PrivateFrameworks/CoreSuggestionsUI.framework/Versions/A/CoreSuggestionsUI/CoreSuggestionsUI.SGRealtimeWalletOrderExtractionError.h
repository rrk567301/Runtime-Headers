@class NSString;

@interface CoreSuggestionsUI.SGRealtimeWalletOrderExtractionError : NSObject <SGRealtimeSuggestion_Private> {
    void /* function */ messageID;
}

@property (nonatomic, copy) NSString *messageID;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic) int extractionSource;

- (void).cxx_destruct;
- (id)init;

@end
