@class NSString, NSAttributedString, NSURL;

@interface CUIKOROccurrenceStateCachedLocation : NSObject

@property (readonly, nonatomic) NSAttributedString *generatedLocationString;
@property (readonly, nonatomic) NSString *locationImageName;
@property (readonly, nonatomic) NSString *originalOccurrenceLocation;
@property (readonly, nonatomic) NSString *originalOccurrenceLocationWithoutPrediction;
@property (readonly, nonatomic) char originalOccurrenceLocationIsPrediction;
@property (readonly, nonatomic) char originalHasNewTimeProposed;
@property (readonly, nonatomic) NSURL *originalConferenceURL;

- (void).cxx_destruct;
- (id)initWithGeneratedLocationString:(id)a0 locationImageName:(id)a1 originalOccurrenceLocation:(id)a2 originalOccurrenceLocationWithoutPrediction:(id)a3 originalOccurrenceLocationIsPrediction:(char)a4 originalHasNewTimeProposed:(char)a5 originalConferenceURL:(id)a6;

@end
