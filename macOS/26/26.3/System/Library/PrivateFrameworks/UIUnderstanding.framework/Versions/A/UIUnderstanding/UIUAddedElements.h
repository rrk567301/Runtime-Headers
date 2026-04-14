@class NSArray, NSString, AddedElementsCompat;

@interface UIUAddedElements : NSObject

@property (readonly) AddedElementsCompat *underlyingObject;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSString *groupID;

- (id)initWithContents:(id)a0;
- (void).cxx_destruct;

@end
