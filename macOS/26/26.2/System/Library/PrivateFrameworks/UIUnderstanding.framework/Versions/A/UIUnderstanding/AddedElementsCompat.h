@class NSString, NSArray;

@interface AddedElementsCompat : NSObject {
    void /* function */ groupID;
    void /* function */ dedupeElements;
}

@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSArray *dedupeElements;

- (void).cxx_destruct;
- (id)init;
- (id)initWithGroupID:(id)a0 dedupeElements:(id)a1;

@end
