@class NSDictionary, NSMutableDictionary;
@protocol StateWatcherDelegate;

@interface StateWatcher : NSObject {
    NSDictionary *_srcDestMapping;
    NSDictionary *_changeWatchList;
    NSMutableDictionary *_previousChangeWatchValues;
}

@property (nonatomic) char enabled;
@property (retain, nonatomic) id<StateWatcherDelegate> delegate;

- (void).cxx_destruct;
- (void)disable;
- (void)enable;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)configureWatchList:(id)a0 changeList:(id)a1 sourceList:(id)a2;
- (id)currentStateSummary:(id)a0;
- (void)deriveKeyPathListFromWatchList:(id)a0 sourceList:(id)a1;
- (char)isValidChangeList:(id)a0;
- (char)isValidSourceList:(id)a0;
- (char)isValidWatchList:(id)a0;

@end
