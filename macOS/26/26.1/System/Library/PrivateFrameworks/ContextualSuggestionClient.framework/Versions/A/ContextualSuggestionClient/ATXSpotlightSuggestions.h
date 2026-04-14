@class NSArray;

@interface ATXSpotlightSuggestions : NSObject {
    void /* function */ scores;
    void /* function */ topics;
    void /* function */ sections;
}

@property (nonatomic, readonly) NSArray *scores;
@property (nonatomic, readonly) NSArray *topics;
@property (nonatomic, readonly) NSArray *sections;

- (id)createSectionsFromServerResults:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
