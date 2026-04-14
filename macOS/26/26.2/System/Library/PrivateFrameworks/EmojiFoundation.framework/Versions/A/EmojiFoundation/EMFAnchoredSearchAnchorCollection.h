@class NSString, NSArray;

@interface EMFAnchoredSearchAnchorCollection : NSObject

@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSArray *leftHandAnchors;
@property (copy, nonatomic) NSArray *rightHandAnchors;

- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocaleIdentifier:(id)a0 leftHandAnchors:(id)a1 rightHandAnchors:(id)a2;

@end
