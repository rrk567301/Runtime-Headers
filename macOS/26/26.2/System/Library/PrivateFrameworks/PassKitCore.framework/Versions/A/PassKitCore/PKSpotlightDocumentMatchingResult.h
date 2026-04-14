@class NSString;

@interface PKSpotlightDocumentMatchingResult : NSObject

@property (retain, nonatomic) NSString *matchingAttribute;
@property (retain, nonatomic) id matchingValue;
@property (retain, nonatomic) NSString *mdSearchableItemAttribute;
@property (nonatomic) long long statusCode;

- (void).cxx_destruct;
- (id)initWithMatchingInfos:(id)a0 matchingValue:(id)a1 mdSearchableItemAttribute:(id)a2 statusCode:(long long)a3;

@end
